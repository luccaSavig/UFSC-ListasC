#include <stdio.h>

int main(){
	
	int mes;
	printf("Mes: ");
	scanf("%d", &mes);
	
	switch(mes){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			printf("tem 31 dias");
		break;
		case 2:
			printf("tem 28 dias");
		break;
		case 4: case 6: case 9: case 11:
			printf("tem 30 dias");
		break;
		default: 
			printf("nao existe esse mes");
	}
}
