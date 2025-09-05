#include <stdio.h>


int main(){
	
	int x, y, t;
	
	printf("Digite valor de x: ");
	scanf("%d", &x);
	
	printf("Digite valor de y: ");
	scanf("%d", &y);
	
	t = x;
	x = y;
	y = t;
	
	printf("Valores trocados: x=%d, y= %d", x, y);
}
