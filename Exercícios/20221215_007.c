#import <stdio.h>

int main () {
	float f = 0;
	float c = 0;
	
	
	printf("type a temperarure in Farenheit\n");
	scanf("%f", &f);
	
	
	c = (5 * (f-32) / 9);
	
	printf("the temperature in celsius is: %.1f\n", c);
	 
}
