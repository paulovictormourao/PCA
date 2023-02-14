#import <stdio.h>

void verify(int num){
	if (num <= 1) {
		if ((num <= 0) || (num%2 == 0)){
			printf("type an number odd greater than 0 \n");
		}
		
		else {
			printf("%d is a prerfect number\n", num);
		}
	}
		
}


void perfect (int num) {
	int i;
	int sum = 0;		

	

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


int main(){
	int num;
	
	printf("type a number to verify if he's a perfect number\n");
	scanf("%d", &num);
	
	verify(num);
	perfect(num);
	}
