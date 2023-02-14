#import <stdio.h>

int fib(int n){
	int i = 0;
	int fn;
	int n1 = 0;
	int n2 = 1;
	
	for (i = 0; i < n; i++){
		fn = n1 + n2;
		n2 = n1;
		n1 = fn;
	}	
	return fn;
}

// f(n) = f(n-1) + f(n-2)

int main () {
	int n;
	while (1 == 1){
		scanf("%d", &n); 
		
		printf("f(%d) = %d\n", n, fib(n));
		printf("\n");
	}
		

}
