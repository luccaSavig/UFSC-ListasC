#include <stdio.h> 

void main(){
	
	int a,b;
	
	printf("Digite dois numeros: ");
	scanf("%d\n%d", &a, &b);
	
	if(a > b){
		printf("Time A venceu: %d", a);
	}else{
		if(a < b){
			printf("Time B venceu: %d", b);
		}else{
			printf("Empate");
		}
	}
}
