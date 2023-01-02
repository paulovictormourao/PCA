#import <stdio.h>

int main(){
	int  i;
	float temp = 0;
	float maior = 0;
	float menor = 0;

	printf("digite 15 numeros\n");
	
	for(i = 0; i < 5; i++) {	
		
		scanf("%f", &temp);
		
		if  ((temp > maior) || (i == 0)){
			maior = temp;	
			}		
		
		if ((temp < menor) || (i == 0)){
			menor = temp;
			}  
	}
	
	printf("\n");
	printf("menor: %f\n", menor);
	printf("maior: %f\n", maior);
}
