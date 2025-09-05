#include <stdio.h>


int main(){
	
	int a,b;
	
	printf("Digite dois numeros: ");
	scanf("%d\n%d", &a, &b);
	
	if(a > b){
		printf("A eh Maior: %d", a);
	}else{
		if(a < b){
			printf("B eh Maior: %d", b);
		}else{
			printf("Ambos sao iguais");
		}
	}
	
}
