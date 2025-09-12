#include <stdio.h>

int main(){
	
	float f, c;
	
	do{
		printf("Farenheit: ");
		scanf("%f", &f);
		
		if(f == -1){
			break;
		}
		c = 5*((f-32)/9);
		printf("Celsius: %f\n", c);
	}while(f != -1);
}
