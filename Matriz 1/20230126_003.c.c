#include <stdio.h>

int main(){
	int i;
	int j;
	int m[3][3];
	int k;
	
	scanf("%d\n", &k);
	
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			scanf("%d\n", &m[i][j]);
					
		} 
		
	}
	
	for (i = 0; i < 3; i++){
		printf("[ ");
		for (j = 0; j < 3; j++){
			printf("%d ", m[i][j]*k);							
		} 
		printf("]");
		printf("\n");

	}
}
