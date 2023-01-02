#import <stdio.h>

int main () {
	float g; 
	int seg = 0;
	int min, h;
	
	printf("massa inicial: ");
	scanf("%f", &g);
	
	do {
		g /= 2;
		seg += 50;
		
	} while (g >= 0.5);
	
	
	h = seg/3600;
	min = (seg/60) - (seg/3600) *60;
	
	printf("massa final: %f\n", g);
	
	printf("%d horas, %d minutos, %d segundos \n", h, min, seg - h*3600 - min*60 );
	


}
