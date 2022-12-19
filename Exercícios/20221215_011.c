#include <stdio.h>

int main() {
	
	float hourly_wage = 0.0;
	float hours = 0.0;
	
	printf("type your hourly wage\n");
	scanf("%f", &hourly_wage);
	
	printf("type your hours worked per mounth:\n");
	scanf("%f", &hours);
	
	float salary = hourly_wage * hours;
	
	printf("your salary per  mounth will be: %.2f\n", salary);

	printf("\n");


	float income_tax = salary*0.11;
	float inss = salary*0.08;
	float syndicate = salary*0.05;
	

	printf("income tax: %.2f\n", income_tax);
	printf("inss: %.2f\n", inss);
	printf("syndicate: %.2f\n", syndicate);
	
	printf("\n");
	
	printf("liquid salary: %.2f \n", salary - income_tax - inss - syndicate );

	}
