#include <stdio.h>

int main(){
	
	int id;
	
	printf("Idade: ");
	scanf("%d", &id);
	
	if(id >= 18){
		printf("Pode servir");
	}else{
		id = 18 - id;
		printf("Espera mais %d anos", id);
	}
}
