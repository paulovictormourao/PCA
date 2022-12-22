#import <stdio.h>

int main(){
	int  i;
	int temp = 0;
	int soma = 0;
	
	for(i; i < 50; i++) {	
		scanf("%d", &temp);
		if (temp % 2 == 1){
		
			soma += temp;
}	}
printf("%d", soma);
	
}
