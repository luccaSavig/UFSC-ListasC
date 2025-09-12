#include <stdio.h>

int main(){
	
	int x, y, i;
	int soma = 0, div, rt, ptw; 
	
	printf("Digite dois numeros: ");
	scanf("%d\n%d", &x, &y);
	
	for(i = 1; i <= x; i++){
		
		soma = soma + y;
		
	}
	for(rt = x; rt >= y; div++){
		
		rt = rt - y;
	}
	for((i = 1, ptw = x); i < y; i++){
		
		ptw = ptw*x;
	}
	
	printf("Multiplicacao: %d\n", soma);
	printf("Divisao: %d ,%d\n", div, rt);
	printf("Potencia: %d\n", ptw);
}
