#include <stdio.h>

int main(){
	
	int c, f;
	
	printf("Digite em graus Fahrenheit: ");
	scanf("%d", &f);
	
	c = ((f - 32)*5)/9;
	
	printf("Graus Celsius: %d", c);
}
