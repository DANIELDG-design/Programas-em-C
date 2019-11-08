#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (void)
{
	float n1,n2,resultado;
	setlocale(LC_NUMERIC,"");
	
	printf("Digite o numero 1:");
	scanf("%f",&n1);
	printf("Digite o numero 2:");
	scanf("%f",&n2);
	resultado=n1+n2;
	printf("\nSoma %2.f:",resultado);
	resultado=n1-n2;
	printf("\nsubtracao:%2.f",resultado);
	resultado=n1*n2;
	printf("\nMultiplicacao %2.f",resultado);
	resultado=n1/n2;
	printf("\nDivisao:%2.f",resultado);
	return 0;
}
