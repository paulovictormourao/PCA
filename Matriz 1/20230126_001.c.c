#include <stdio.h>


int main(){
	int i;
	int j;
	int m[3][5];
	int n[3][5];
	
	
	for (i = 0; i < 3; i++){
		for (j = 0; j < 5; j++){
			scanf("%d\n", &m[i][j]);
					
		} 
		
	}
	
	for (i = 0; i < 3; i++){
		for (j = 0; j < 5; j++){
			scanf("%d\n", &n[i][j]);
					
		} 
		
	}
	
	
	for (i = 0; i < 3; i++){
		printf("[ ");
		for (j = 0; j < 5; j++){
			printf("%d ", m[i][j] + n[i][j]);							
		} 
		printf("]");
		printf("\n");
	}
} 


