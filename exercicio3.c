#include <stdio.h>
int main (void){
	
	int x;
	int y;
	int z;
	int soma3;
	
	printf("Digite o primeiro numero: ");
	scanf ("%d", &x);
	
	printf("Digite o segundo numero: ");
	scanf ("%d", &y);
	
	printf("Digite o terceiro numero: ");
	scanf ("%d", &z);
	
	soma3 = x + y + z;
	
	printf(" O valor da multiplicação dos dois numeros corresponde a: %d " , soma3);
	
	return 0;
}
