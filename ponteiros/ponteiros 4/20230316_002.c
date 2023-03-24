#include <stdio.h>
#include <stdlib.h>


int main(){
	int m, n, i, j;
	int **mat;
	
	printf("lines: ");
	scanf("%d", &m);
	
	printf("columns: ");
	scanf("%d", &n);
	
	mat = (int **) malloc(m * sizeof(int));
	
	for (i = 0; i < m; i++){
		*(mat + i) = (int*) malloc(n * sizeof(int));
	}

	
	for (i = 0; i < m; i++){
		for (j = 0; j < n ; j++){
		
			printf("[%d][%d]:  ", i + 1, j + 1);
			scanf("%d", (*(mat + i)+j ) );	
		
		
			}
			
		
	}
		
	printf("pont form:\n");	
	
	for (i = 0; i < m; i++){
		for (j = 0; j < n ; j++){
			printf("%d ", *(*(mat +i) + j) );
		}
		printf("\n");
		
	}
	
	printf("array form:\n");
	
	for (i = 0; i < m; i++){
		for (j = 0; j < n ; j++){
			printf("%d ", mat[i][j]);
		}
		printf("\n");
		
		free(*(mat + i));
	}
	
	
	free(mat);
	return 0;
}
