#include <stdio.h>

int main() {
	
	float hourly_wage = 0.0;
	float hours = 0.0;
	
	printf("type your hourly wage\n");
	scanf("%f", &hourly_wage);
	
	printf("type your hours worked per mounth:\n");
	scanf("%f", &hours);
	
	printf("your salary per  mounth will be: %.2f\n", hourly_wage * hours);
}
