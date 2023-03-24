#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void mediaDesvio (float *avl, int size, float *med, float *desv){
	
	float sum = 0;
	float sumD = 0;
	float auxD;
	
	for (int i = 0; i < size; i++){
	
		sum +=  *(avl + i);
	

		
	}
	
	*med = sum/size;
	
	for (i = 0; i < size; i++){
		auxD = *(avl + i) - *med;
		sumD += pow(auxD, 2);
	}
		
	*desv = sqrt(sumD/size);

}


int main(){
	int i, n;
	float media , desvio;

	float *list;
	
	printf("Number of students: ");
	scanf("%d", &n);
	
	list = (float *) malloc( n * sizeof(float) );
	
	if (list == NULL){
		printf("ERROR: memory allocation failure\n");
		return 1;
	}

	
	for (i = 0; i < n; i++){				// Input notes
		scanf("%f", list + i);
	}

	
	mediaDesvio (list, n, &media, &desvio);
	
	printf("%f\n", media);
	printf("%f\n", desvio);
	
	free(list);
	return 0;
}
