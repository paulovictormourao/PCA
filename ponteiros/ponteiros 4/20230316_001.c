#include <stdio.h>
#include <stdlib.h>


void m(int *vet, int size, int *min, int *max){
	int i;
	
	*max = vet[0];
	*min = vet[0];
	
	
	
	for(i = 0; i < size ; i++){
		
		if (*(vet + i) < *min){
			
			*min = *(vet + i);
			
		}
	
		if (*(vet + i) > *max){
			
			*max = *(vet + i);
			
		}
	
	}
	
}

int main(){
	int i, menor, maior , x;
	int *list;
	
	
	
	scanf("%d", &x);
	
	list = (int *) malloc(x * sizeof(int));	
	
	if (list == NULL){
		printf("ERROR: memory allocation failure\n");
		return 1;
	}
	
	
	for (i = 0; i < x; i++){
		scanf("%d", (list + i) );
	}
	
	m(list, x, &menor, &maior);
	
	printf("menor: %d\n", menor);
	printf("maior: %d\n", maior);
	
	return 0;
	
}
