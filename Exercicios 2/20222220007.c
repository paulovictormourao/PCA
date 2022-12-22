#import <stdio.h>

int main(){
	int  i;
	float temp = 0.0;
	float maior = 0.0;
	float menor = 0.0;
	int stop = 1;
	
	do {
		
		printf("digite as 3 notas:\n");
		printf("\n");
		
		for(i = 0; i < 3; i++) {	
			printf("Avaliacao %d:  ", i + 1);
			scanf("%f", &temp);
			
			if  ( ( (temp > maior) && (temp >= 0) ) || (i == 0) ){
				maior = temp;		
			}		
			
			if  ( ( (temp < menor) && (temp >= 0) ) || (i == 0) ){
				menor = temp;
			}  
		}
		
		printf("\n");
		printf("menor: %.2f\n", menor);
		printf("maior: %.2f\n", maior);
		
		printf("\n");
		printf("para parar, digite 0, para continuar, digite 1:\n");
	
		scanf("%d", &stop);
		
		
	} while (stop != 0);
		
}
