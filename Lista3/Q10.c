#include <stdio.h>

int main(){
	
	float vo, v, t;
	float g = 9.81;
	
	printf("Digite a velocidade inicial: ");
	scanf("%f", &vo);
	
	while(v >= 0){
		v = vo -(g*t);
		printf("Velocida: %f\n", v);
		t = t+0.01;
	}
}
