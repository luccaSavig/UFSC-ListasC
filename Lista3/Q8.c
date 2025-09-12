#include <stdio.h>

int main(){
	
	int n,i;
	
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	for(i = 0; i <= 10; i++){
		
		//r = n*i;
		printf("%d\n", n*i);
	}
}
