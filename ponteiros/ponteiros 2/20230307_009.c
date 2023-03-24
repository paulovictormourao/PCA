#include <stdio.h>
#include <string.h>

#define SIZE 100

void str(char *vet, char x){
	int i = 0;
	int count = 0;
	int list[SIZE];	

	
	while (vet[i] != '\0') {
	
		if (vet[i] == x){
			
			list[count] = i + 1;
			
			printf("position: %d\n", i + 1);
			count++;
		}
	i++;		
	}	
	
	printf("\n");
	printf("frequency: %d\n", count);
	}

int main(){
	char word[SIZE];
	char x = 'a';
	int i;
	int end;
	
	scanf("%[^\n]", &word);
	
	str(word, x);

		
		
	
}	
