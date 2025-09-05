#include <stdio.h>

int main(){
	
	char nome[30];
	float n1, n2, n3, M;
	
	printf("Nome do aluno: \n");
	scanf("%s", &nome);
	
	printf("N1: \n");
	scanf("%f", &n1);
	
	printf("N2: \n");
	scanf("%f", &n2);
	
	printf("N3: \n");
	scanf("%f", &n3);
	
	M = (n1+n2+n3)/3;
	
	if(M >= 7){
		printf("Aluno aprovado: %s, media: %f", nome, M);
	}else{
		printf("Aluno reprovado: %s, media: %f", nome, M);
	}
}
