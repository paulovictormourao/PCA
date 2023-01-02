#import <stdio.h>

int main() {
	int x, y, m, n, temp, xmax, ymax;
	int maior = 0;
	
	printf("type final x: ");
	scanf("%d", &m);

	printf("type final y : ");
	scanf("%d", &n);


	for (x = 0; x <= m; x++ ){	
		for (y = 0; y <= n; y++ ){
	
			temp = x*y - x*x + y;
		
			if (temp > maior){
				maior = temp;
				xmax = x;
				ymax = y;
			}
		}
	}
	printf("max x: %d\nmax y: %d\n", xmax, ymax);

}

