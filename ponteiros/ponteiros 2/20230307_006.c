#include <stdio.h>


#define SIZE 3

void sum(int *v1, int *v2, int *v3){
	int i;
	
	for (i = 0; i < SIZE; i++){
		v3[i] = v1[i] + v2[i];
	}
	
}

int main () {
	int list1[SIZE];
	int list2[SIZE];
	int list3[SIZE];
	int i;
	
	for (i = 0; i < SIZE; i++){
		printf("[%d] value for v1 ",  i + 1);
		scanf("%d", &list1[i]);
		
		printf("[%d] value for v2 ", i + 1);
		scanf("%d", &list2[i]);
	}
	
	sum(list1 , list2, list3);
		
	printf("[");
	for (i = 0; i < SIZE; i++){

		printf("%d ", list3[i]);
	}
	printf("]");

}	
