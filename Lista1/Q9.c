#include <stdio.h>

	int Ts;
	int h, m, s;

int main(){
		
	printf("Digite o total de segundos: ");
	scanf("%d", &Ts);
	
	h = Ts/3600;
	m = (Ts % 3600)/60;
	s = Ts%60;
	
	printf("Horas: %d Minutos: %d Segundos: %d", h,m,s); 
	
}
