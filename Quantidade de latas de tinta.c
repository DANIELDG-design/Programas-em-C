#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	float altura,raio,areaCilindro,qtdadeLitros,qtdadeLatas,custo;
	prin1tf("\nDigite o valor da altura em metros:");
	scanf("%f",&altura);
	printf("\nDigite o valor do raio em metros:");
	scanf("%f",raio);
	areaCilindro=3.14*raio*raio+2*3.14*raio*altura;
	printf("\nA area do cilindro eh %.2f metros qudrados",areaCilindro);
	qtdadeLitros==areaCilindro/3;
	printf("\n quantidade de litros necessaria eh de %.2f",qtdadeLitros);
	qtdadeLitros/5;
	printf("\nA qtidade de latas necessaria eh de %.2f",qtdadeLatas);
	custo=qtdadeLatas*20;
	printf("\nO valor total das tintas eh de R$ %.2f\n",custo);
	system("PAUSE");
	return 0;
	
}
