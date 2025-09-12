#include <stdio.h>


int main(){
	
	int vt, vt1, vt2, vt3, vt4, vt5;
	
	/*printf("Digite o seu voto: ");
	scanf("%d", &vt);*/
	
	while(vt != 0){
		
		printf("Digite o seu voto: ");
		scanf("%d", &vt);
		
		switch(vt){
			case 1:
				vt1 = vt1+1;
			break;
			case 2:
			 	vt2 = vt2+1;
			break;
			case 3:
				vt3 = vt3+1;
			break;	
			case 4: 
				vt4 = vt4+1;
			break;
			case 5:
				vt5 = vt5+1;
			break;
			default:
				printf("Nao tem essa opcao idiota\n");
			break;
		}
	}
	printf("Bolsonaro: %d\n", vt1);
	printf("Lula: %d\n", vt2);
	printf("P. Marcal: %d\n", vt3);
	printf("Nulo: %d\n", vt4);
	printf("Branco: %d\n", vt5);
	printf("Total de votos: %d", vt1+vt2+vt3+vt4+vt5);
}
