#include <stdio.h>

int main (){
	float side = 0.0;
	
	printf("type the side of a square\n");
	scanf("%f", &side);
	
	printf("the square area is: %.1f\n", side*side);
	printf("twice the area of the square: %.1f\n", side*side*2);
	
}
