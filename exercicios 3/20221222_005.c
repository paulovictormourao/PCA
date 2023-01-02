#import <stdio.h>

int main() {
	float i;
	float sum = 0.0;
	
	
	for (i = 1; i <= 50; i ++){
		sum += ((2*i) - 1) / i;
		printf("%.0f/%.0f \n", (2*i) - 1, i);
		
	}
	
	printf("\n");
	printf("THE SUM OF THE NUMBERS ABOVE IS:\n");
	printf("%.2f", sum);
}
