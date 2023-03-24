#include <stdio.h>

#define SIZE 3

int sort (int *vet)  {
	int i;
	int j;
	int aux;
	
	for (i = 1; i < SIZE; i++){
		
		aux = vet[i];
		
		for(j = i - 1; j >= 0 && vet[j] > aux; j--){
		
			vet[j + 1] = vet[j];
		}
		
		vet[j + 1] = aux;
	}
	if ( (vet[0] == vet[1]) && (vet[1] == vet[2]) ){
		return 1;		
	}
	else{
		return 0;
	}
}



int main () { 
	int list [SIZE];
	int i;
	int r;
	
	for (i = 0; i < SIZE; i++){
		scanf("%d", &list[i]);
	}
	
	r = sort(list);
	
	for (i = 0; i < SIZE; i++){
		printf("%d ", list[i]);
	}
	return r;
}
