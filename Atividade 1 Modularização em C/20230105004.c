int fatorial(int n){
	int i;
	int r = 1;
	
	for (i == 0; i < n; i ++){
		r *= (i+1);
	}
	
	return r;
}

int main() {
	int n;
	scanf("%d", &n);
	
	printf("fat = %d", fatorial(n));
}
