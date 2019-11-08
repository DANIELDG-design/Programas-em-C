#include<stdio.h>
#include<stdlib.h>

int main (void)
{

	int num;
	
	printf("Digite o numero:");
	scanf("%d",&num);
	
	if(num%2==0)
	{
	printf("O numero e par\n");
	}
	else
	{
		printf("O numero e impar\n");
	}
	
	
	if(num>0)
	{
	printf("O numero e positivo");
	}
	else
	{
		printf("O numero e negativo");
	}
	
	return 0;
}
