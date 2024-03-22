#include <stdio.h>
int main (void) {

	char nomeCompleto [40];
	char email[40];
	int qtdLivros;
	float salario;

	printf("Digite seu nome completo: ");
	gets(nomeCompleto);

	printf("Digite seu email: ");
	scanf("%s" , email);

	printf("Digite a quantidade de livros lidos no ano anterior: ");
	scanf("%d" , &qtdLivros);

	printf("Digite seu salario: ");
	scanf("%f" , &salario);

	printf("O nome digitado: %s\n" , nomeCompleto);
	printf("O email digitado: %s\n" , email);
	printf("A quantidade de livros lidos no ano anterios são: %d\n" , qtdLivros);
	printf("O salario declarado : %.2f\n" , salario);

	return 0;
}
