#import <stdio.h>

int main() { 
	float numero = 0.0;
	
	
	printf("digite UM numero com ponto decimal \n");
	scanf("%f", &numero);
	
	
	printf("O NUMERO QUE VOCE DIGITOU FOI: %f\n", numero);
	printf("\n");
	printf("O NUMERO QUE VOCE DIGITOU, COM 2 CASAS DECIMAIS: %.2f\n", numero);
	printf("\n");
	
}
