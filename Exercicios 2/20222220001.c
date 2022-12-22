#import <stdio.h>

int main(){
	int  i;
	float temp = 0.0;
	float soma = 0.0;
	
	for(i; i < 5; i++) {	
		scanf("%f", &temp);
		soma += temp;
	
}	

printf("%.1f", soma);
	
}
