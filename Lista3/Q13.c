#include <stdio.h>


int main(){
	
	int sm, qt;
	int n;
	int md, pr, mr, mn, imp;
	
	printf("Digite alguns numero: \n");
	scanf("%d", &n);
	
	mn = n;
	mr = n;
	
	do {
		
		printf("Digite alguns numero: \n");
		scanf("%d", &n);
		
		if(n != 0){
		
			sm += n;
			qt++;
			 
			if(n > mr) mr = n;
			if(n < mn) mn = n;
			
			if(n%2 == 0){
				pr++;
			}else{
				imp++;
			}
			
			md = sm/qt;
		
		}
	}while(n != 0);
	
	printf("Media: %d\n", md);
	printf("Menor: %d\n", mn);
	printf("Maior: %d\n", mr);
	printf("Pares: %d\n", pr);
	printf("Impar; %d\n", imp);
}
