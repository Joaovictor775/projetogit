#include <stdio.h>
int main (void){
	
	float base;
	float altura;
	float area;
	
	printf("digite o valor da base do triangulo: ");
	scanf("%f" , &base);
	
	printf("digite o valor da altura do triangulo: ");
	scanf("%f" , &altura);
	
	area = (base * altura )/2 ;
	
	printf(" O valor da area do triangulo corresponde a: %.2f " ,area);
	
	return 0;
}
