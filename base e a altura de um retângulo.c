#include<stdio.h>
#include<stdlib.h>

int main (void)
{
	float base, altura, perimetro,area;
	printf("Digite a base:");
	scanf ("%f",&base);
	printf("Digite a altura:");
	scanf("%f",&altura);
	perimetro=base+altura;
	printf("Perimetro:%f\n",perimetro);
	area=base*altura;
	printf("Area:%f\n",area);
	
	return 0;
		
}
