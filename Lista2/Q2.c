#include <stdio.h>

int main(){
	
	int a,b,c,d,e;
	
	printf("Digite 5 numeros: ");
	scanf("%d\n%d\n%d\n%d\n%d\n%d\n", &a, &b, &c, &d, &e);
	
	//maior();
	
	if(a > b && a > c && a > d && a > e){
		printf("A eh maior: %d", a);
	}else{
	if(b > a && b < c && b > d && b > e){
		printf("B eh maior: %d", b);
	}
	if(c > a && c > b && c > d && c > e){
		printf("C eh maior: %d", c);		
	}
	if(d > a && d > b && b > c && b > e){
		printf("D eh maior: %d", d);
	}if(e > a && e > b && e > c && e > d){
		printf("E eh maior: %d", e);
	}
}

/*int maior(){
	main();
	
}*/
