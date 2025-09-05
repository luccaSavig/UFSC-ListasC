#include <stdio.h>
#include <math.h>

int main(){
	
	int a, b, c, d, S, R;
	
	printf("Digite quatro numeros: ");
	scanf("%d\n%d\n%d\n%d", &a, &b,&c, &d);
	
	S = a+b+c+d;
	R = pow(S, 2);
	
	printf("%d", R);
}
