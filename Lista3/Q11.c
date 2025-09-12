#include <stdio.h>

int main(){
	
	int n1, n2, i;
	
	printf("Digite um numero: ");
	scanf("%d", &n1);
	printf("Digite outro numero:");
	scanf("%d", &n2);
	
	for(i = 0; i <= 10; i++){
		
		//r = n*i;
		printf("%d\n", n1*i);
	}
	for(i = 0; i <= 10; i++){
		
		//r = n*i;
		printf("%d\n", n2*i);
	}
}
