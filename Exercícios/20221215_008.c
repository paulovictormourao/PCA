#import <stdio.h>

int main () {
	float f = 0;
	float c = 0;
	
	
	printf("type a temperarure in Celsius\n");
	scanf("%f", &c);
	
	
	f = ((9*c)/5) + 32;
	
	printf("the temperature in  Farenheit is: %.1f\n", f);
	 
}
