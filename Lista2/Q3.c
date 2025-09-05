#include <stdio.h>

int main(){
	
	int a;
	
	printf("Digite um numero: ");
	scanf("%d", &a);
	
	if(a%2 == 0){
		printf("Par");
	}else{
		printf("Impar");
	}
}
