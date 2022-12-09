#include <stdio.h>



int main(int argc, char *argv[]) {

	float h = 0.0;
	float b = 0.0;

	printf("Enter a value for the height\n");
	scanf("%f", &h);

	printf("Enter a value for the base\n");
	scanf("%f", &b);

	printf("Total area of the triangle = %.2f\n", h*b/2);

	return 0;
}

