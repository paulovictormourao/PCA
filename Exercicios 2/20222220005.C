#import <stdio.h>

int main(){
	int  i;
	int temp = 0;
	int maior = 0;
	int menor = 0;
	
	for(i; i < 5; i++) {	
		scanf("%d", &temp);
		
		if  ( ( (temp > maior) && (temp >= 0) ) || (i == 0) ){
			maior = temp;	
			}		
		
		if  ( ( (temp < menor) && (temp >= 0) ) || (i == 0) ){
			menor = temp;
			}  
	}
	
	printf("\n");
	printf("menor: %d\n", menor);
	printf("maior: %d\n", maior);
}
