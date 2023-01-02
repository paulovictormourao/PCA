#include <stdio.h>
#import <math.h>

int main() {
	float x;
	float xn;
	float y;
	float p = 1.0;
	float e = 0.1;
	
	printf("type a number to obtain the sqaure root\n");
	scanf("%f", &y);
	
	
	x = y/2 ;
	
	xn = x - (( x*x) - y) / (2*x) ;
	
	p = fabs(xn - x);
	
	
	
	
	while( p > e) {
	 
		xn = x - (( x*x) - y) / (2*x);
		
		p = fabs(xn - x);
		
		x = xn;
	}


	printf("aprocimation: %f\n", xn);
	printf("the square root: %f\n", sqrt(y));
}	
