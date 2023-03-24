#include <stdio.h>
#include <stdlib.h>

void troca(float *a, float *b){
    float aux = *a;
    *a = *b;
    *b = aux;
}

int main(){
    float a;
    float b;
    
    scanf("%f", &a);
    scanf("%f", &b);
    
    printf("Antes da troca:\n");
    printf("a: %.2f\nb: %.2f\n\n", a, b);
    
    troca(&a, &b);

    printf("Após a troca:\n");
    printf("a: %.2f\nb: %.2f\n\n", a, b);

}
