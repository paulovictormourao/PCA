#import <stdio.h>

int main(){

	int n, j, i, p;
	int sum = 0;
	
	printf("type an int\n");
	scanf("%d", &p);
	
	for (n = 2; n <= p; n++){
	
		j = (n*n) - n + 1;
		printf("\n");
		
		for (i = 1; i != n + 1; i++){
			printf("%d, ", j + 2*(i-1));
		}
	
		
		printf("the sum between theese %d odd numbers in a row\n", n);
		printf("is %d, and that is equal to the cube of %d\n", n*n*n, n);
		
	}
	
}
