#include <stdio.h>


int main(){
	
	int v,d,t,g;
	
	printf("Digite  tempo pecorrido: ");
	scanf("%d", &t);
	
	printf("Digite a velocidade media: ");
	scanf("%d", &v);
	
	d = v*t;
	g = d/12;
	
	printf("Gasolina  gasta: %d", g);
}
