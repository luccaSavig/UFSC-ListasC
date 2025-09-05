#include <stdio.h>

int main(){
	
	float r, d, c;
	
	printf("Digite a quantidade em real que deseja converter em Dolar: ");
	scanf("%f", &r);
	
	d = 5.42;
	c = r/d;
	
	printf("Conversao: %f", c);
}
