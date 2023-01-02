#import <stdio.h>

int main() {
	int num;
	int i;
	int sum = 0;
	
	
	printf("type a number to verify if he's a perfect number\n");
	scanf("%d", &num);
	
	
	if (num <= 1){
		if (num <= 0){
		
			printf("type a number greater than 0\n");
		}
		else {
			printf("%d is a prerfect number\n", num);
		}
	}
	
	else{
		for ( i = 1; i != (num - 1) ; i++ ) {
	
			if ( (num % i) == 0 ) {
				sum += i;
			}		

		}
	
		if (sum != num){
			printf("%d is not a perfect number\n", num);
		}


		else{
			printf("%d is a perfect number\n", num);
		}		
	}
}	
