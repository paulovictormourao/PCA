#include <stdio.h>

int main( ) {
	char nome[30];
	int sexo = 0;
	int idade = 0;
	
	printf("digite seu nome\n");
	scanf("%s", &nome);
	
	printf("digite 1 se for homem, e 2 se for mulher\n");
	scanf("%d", &sexo);
		
	printf("digite sua idade\n");
	scanf("%d", &idade);
	
	printf("nome: %s \n", nome);
	
	if (sexo == 1){
		printf("Sexo: homem\n");
	}
	
	if (sexo == 2){
		printf("Sexo: mulher\n");
	}
	
	printf("idade %d;", idade);	
	
	
	
	

}

