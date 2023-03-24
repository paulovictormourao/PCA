#include <stdio.h>

int main(){

	// Values
	int i = 20;
	float f = 9.223;
	char c = 'a';
		
	
	// Pointers
	int *p_int;
	float *p_float;
	char *p_char;

	
	
	
	p_int = &i;
	p_float = &f;
	p_char = &c;
	
	printf("%d, %d, %d\n", p_int, p_float, p_char);
	
	p_int++;
	p_float++;
	p_char++;
	
	printf("%d, %d, %d\n", p_int, p_float, p_char);
}
