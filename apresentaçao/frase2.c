#import <stdio.h>

int main() { 
	char frase[60] = "";
	
	
	printf("digite uma frase \n");
	scanf("%[^\n]%*c", &frase);
	
	
	printf("A FRASE QUE VOCE DIGITOU FOI: %s\n", frase);
	
	
}
