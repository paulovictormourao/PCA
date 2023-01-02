#import <stdio.h>

int main () {
	int temp;
	int i = 0;
	int p = 0;
	
	
	printf("digite numeros, para parar, digite um numero maior que 1000\n");
	do { 
		scanf("%d", &temp);
		
		if ( (temp%2) == 0 ) {
			p += temp;
		} 
		
		else {
			i += temp;
		}
	
	} while (temp <= 1000);
	 
	 printf("soma dos pares: %d\n", p);
	
	 printf("soma dos impares: %d\n", i); 
}
