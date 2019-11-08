#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	char nome [100];
	char endereco[100];
	char telefone[100];
	
	printf("Digite seu nome: \n");
	scanf ("%s", &nome);

	printf("\n\n");
	
	printf("Digite seu endereço:\n");
	scanf("%s", &endereco);
	
	printf("\n\n");
	
	printf("Digite seu telefone:\n");
	scanf("%s", &telefone);
	
	printf("\n%", nome);
	printf("\n\n");


	printf("\n%",endereco);
	system("pause");
	return 0;

	printf("\n%",telefone);
	system("pause");
	return 0;

}
