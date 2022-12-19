#include <stdio.h>

#define PI 3.1415

int main (){
	
	float radius = 0.0;
	
	printf("type a circle radius:\n");
	scanf("%f", &radius);
	
	printf("the area of the circunference is: %.1f", radius*radius*PI);
}
