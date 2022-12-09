#include <stdio.h>



int main(int argc, char *argv[]) {

	float s = 0.0;
	printf("Enter your salary\n");
	scanf("%f", &s);

	printf("New Salary: %.2f\n", s*1.1);

	return 0;
}

