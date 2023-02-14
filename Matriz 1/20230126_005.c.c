#include <stdio.h>

int main(){
	int i;
	int j;
	int o = 5;
	int m[o][o];
	int sum = 0;
	
	for (i = 0; i < o; i++){
		for (j = 0; j < o; j ++){
			scanf("%d", &m[i][j]);	
		}
	}
	
	
	for (i = 0; i < o; i++){
		
		printf("[");
		
		for (j = 0; j < o; j ++){
			printf(" %d ", m[i][j]);	
			
		}
			
		printf("]\n");	
	}


	printf("\n diagonal principal:");
	
	
	for (i = 0; i < o; i++){
		for (j = 0; j < o; j ++){
			if (i == j){
				printf(" %d " , m[i][j]);	
			}
				
		}
		
	}
	
	printf("\n diagonal secundaria:");
	
	for (i = 0; i < o; i++){
		for (j = 0; j < o; j ++){
			if (i + j  + 2 ==  o + 1){
				printf(" %d" , m[i][j]);	
			}
				
		}
		
	}
	for (j = 0; j < o; j++){
		sum += m[o-1][j];
	}
	
	printf("\n soma: %d \n", sum);

	
	for (i = 0; i < o; i++){
		
		printf("[");
		
		for (j = 0; j < o; j ++){
			if (i != j){
				printf(" %d ", m[i][j]);	
			}
		}
			
		printf("]\n");	
	}	
	
}

