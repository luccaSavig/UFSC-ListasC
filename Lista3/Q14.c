#include <stdio.h>

int main(){
	
	int i, r, n;
	
	printf("Digite um numero: ");
	scanf("%d\n", &n);
	
	for(i = 1; i <= n; i++){
		
		r *= i;
		
	}
	printf("%d", r);
}
