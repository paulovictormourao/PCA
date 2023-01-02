#import <stdio.h>

int main() {
	int num;
	int i;
	int comparator = 1;
	
	
	printf("type a number to verify if he's a prime\n");
	scanf("%d", &num);
	
	if (num <= 2){
		if (num <= 0){
		
			printf("type a number greater than 0\n");
		}
		else {
			printf("%d is a prime number\n", num);
		}
	
	}
	
	else{
		
		for ( i = 2; i != (num - 1) ; i++ ) {
	
			if ( (num % i) == 0 ) {
	
				printf("%d is not a prime number\n", num);
				comparator = 0;
				break;
			}
		}
		
		if (comparator == 1){
			printf("%d is a prime number\n", num);
		}
		
		
		
	}
}	
