#include <stdio.h>

#define SIZE 8

void vet (int *a, int *b){
	while (a < b){
		*a *= 2;
		printf("%d   ", *a);
		
		if ((*a/2) % 2 == 0){
			printf("%d \n", &a);
		}
		
		else{
			printf("\n");
		}
		
		a++;					
	}
}

int main () {
	int list[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8};
	int *p = list;
	int *q = list + SIZE;
	
	vet(list, q);
	
	
	return 0;
}
