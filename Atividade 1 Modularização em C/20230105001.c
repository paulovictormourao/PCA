#include <stdio.h>

int check(int n, char m) {
	
	while ((n < 0) || (n > 1000)){
		printf("digite um valor entre 0 e 1000 para %c: ", m);
		scanf("%d", &n);	
	}

	return n;
}	

float percent (int maior, int menor){
	return 100*menor/maior;
}
	
	
int modulo (int maior, int menor){
	return maior - menor;
}

int main () {
	int x;	
	int y;
	int maior = 0;
	int menor = 0;
	
	
	printf("digite um valor entre 0 e 1000 para x: ");
	scanf("%d", &x);
	x = check(x, 'x');
	
	
	printf("digite um valor entre 0 e 1000 para y: ");
	scanf("%d", &y);	
	y = check(y, 'y');
	
	
	if (x > y){
		maior = x;
		menor = y;
	}
	
	else{
		maior = y;
		menor = x;
	}
	
	
	printf("%.1f\n", percent(maior, menor));
	printf("%d\n", modulo(maior, menor));
	
	
}
