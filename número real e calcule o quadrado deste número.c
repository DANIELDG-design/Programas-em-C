#include<stdio.h>
#include<stdlib.h>

int main (void)
{
	float num,resultado;
	printf("Digite o numero:");
	scanf ("%f",&num);
	resultado=num*num;
	printf("Quadrado do numero:%2.f",resultado);
	return 0;
}
