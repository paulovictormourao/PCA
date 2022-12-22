#import <stdio.h>

int main(){
	int  i;
	int temp = 0;
	int maior = 0;
	int menor = 0;

	printf("digite 20 numeros\n");
	
	for(i = 0; i < 20; i++) {	
		
		scanf("%d", &temp);
		
		if  ((temp > maior) || (i == 0)){
			maior = temp;	
			}		
		
		if ((temp < menor) || (i == 0)){
			menor = temp;
			}  
	}
	
	printf("\n");
	printf("menor: %d\n", menor);
	printf("maior: %d\n", maior);
}
