#import <stdio.h>

int main () {
	float h = 0;
	float ideal = 0;
	
	
	printf("type your height\n");
	scanf("%f", &h);
	
	
	ideal = (72.7*h) - 58;
	
	printf("your ideal weight is: %.2f\n", ideal);
	 
}
