#include <stdio.h>
#include <stdlib.h>

int main() {
	double **mat1, **mat2;
	int i, j, m, n;
	
	
	printf("lines: ");
	scanf("%d", &m);
		
	printf("columns: ");
	scanf("%d", &n);
	
	
	mat1 = (double **) malloc(m * sizeof(double));
	mat2 = (double **) malloc(m * sizeof(double));
	
	
	for (i = 0; i < m; i++)
		
		*(mat1 + i) = (double *) malloc (n * sizeof(double));
		*(mat2 + i) = (double *) malloc (n * sizeof(double));
	
	
	/*if ((mat1 == NULL) || (mat2 == NULL)){
		printf("ERROR: memory allocation failure");
	}*/
	
	for (i = 0; i < m; i++){
		for (j = 0; j < n; j++){
			printf("mat1 [%d][%d]: ", i + 1, j +1 );
			scanf("%lf",   *(mat1 + i) + j   );
			
			printf("mat2 [%d][%d]: ", i + 1, j +1 );
			scanf("%lf", *(mat2 +i) + j );
			
		}
	}
	for (i = 0; i < m; i++){
		for (j = 0; j < n; j++){
			printf("%.1f ",  mat1[i][j] + mat2[i][j] );
			
		}
		printf("\n");
	}	
	
	free(mat1);
	free(mat2);
	return 0;
}
