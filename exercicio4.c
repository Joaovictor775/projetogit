#include <stdio.h>
int main (void){
	int x;
	int y;
	int z;
	int media;	
	
	printf("Digite o primeiro numero: ");
	scanf ("%d", &x);
	
	printf("Digite o segundo numero: ");
	scanf ("%d", &y);
	
	printf("Digite o terceiro numero: ");
	scanf ("%d", &z);
	
	media = (x + y + z) /3;
	
	printf(" O valor da media de tres numeros corresponde a: %d " , media);
	
	
	return 0;
}
