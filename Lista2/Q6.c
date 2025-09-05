#include <stdio.h>

int main(){
	
	float n1, n2, n3, M;
	printf("N1: \n");
	scanf("%f", &n1);
	
	printf("N2: \n");
	scanf("%f", &n2);
	
	printf("N3: \n");
	scanf("%f", &n3);
	
	M = (n1+n2+n3)/3;
	
	if(M >= 7){
		printf("Aprovado, media: %f", M);
	}else{
		printf("Reprovado, media: %f", M);
	}
}
