#import <stdio.h>

int main () {
	float a = 0.0;
	float b = 0.0;
	int c = 0;
	
	
	printf("type a real nunber\n");
	scanf("%f", &a);
	
	printf("type another\n");
	scanf("%f", &b); 
	
	printf("tyde a integre\n");
	scanf("%d", &c);
	
	printf("the product of twice the first and half of the second plus the \nsum of three times the first and the third. the third cubed: \n");
	
	printf("%.2f",(2*a)*(0.5*b) + (3*(a+c) + c*c*c ));
}
