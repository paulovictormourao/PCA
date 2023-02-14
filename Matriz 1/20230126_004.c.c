#include <stdio.h>

int main (){
	int i;
	int j;
	int x;
	int m[3][3];
	int find = 0;
	

	
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j ++){
			scanf("%d", &m[i][j]);	
		}
	}
	
	printf("procurar por: ");
	scanf("%d", &x);
	
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j ++){
			if (x ==  m[i][j]){
				printf(" %d esta na  linha: %d  coluna: %d\n", x, i + 1, j + 1);
				find = 1;
			}
				
		}
	}
	if (find == 0){
		printf(" %d nao esta na matriz.\n", x);
	}
}
