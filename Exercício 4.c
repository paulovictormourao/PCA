#include <stdio.h>



int main(int argc, char *argv[]) {

	float c = 0.0;
	printf("Enter the total of the bill\n");
	scanf("%f", &c);

	printf("The fee for the waiter: %.2f\n", c*0.1);

	return 0;
}

