#include <stdio.h>


int main(){
	
	float vf = 5.0;
	float vkr, kp;
	
	printf("Valor quilometro rodado e do Quilometro pecorrido: ");
	scanf("%f\n%f", &vkr, &kp);
	
	float T = vf + vkr + kp;
	
	printf("Total: %f", T);
}
