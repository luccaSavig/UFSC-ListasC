#include <stdio.h>

int main(){
	
	int c, f;
	
	printf("Digite em graus Celsius: ");
	scanf("%d", &c);
	
	f = (9 * c + 160)/5;
	
	printf("Graus Fahrenheit: %d", f);
}
