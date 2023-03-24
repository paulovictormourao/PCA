#include <stdio.h>

#define SIZE 10


void f(int *vet, int *min, int *max){
	int *bg = vet;
	int *end = vet + SIZE;
	
	*min = vet[1];
	*max = 0;
	
	while(bg < end){
	
		if (*bg > *max){
			*max = *bg;	
		}	
		
		
		if (*bg < *min){
			*min = *bg;
		}
		
		bg++;
	}
	printf("min : %d ", *min);
	printf("max : %d ", *max);
}

int main () {
	int list[SIZE] = {1, 2, 3 , 4, 5, 6, 7, 8, 9, 10};
	int a;
	int b;
	
	f(list, &a, &b);
	
	





}

