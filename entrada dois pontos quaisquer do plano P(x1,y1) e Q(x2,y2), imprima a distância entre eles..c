#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{
	float x1,x2,y1,y2,d,d1;
	printf("\nDigite o valor de x1:");
	scanf("%f,&x1");
	printf("\nDigite o valor y1:");
	scanf("%f",&y1);
	printf("\nDigite o valor de x2:");
	scanf("%f",&x2);
	printf("\nDigite o valor de y2");
	printf("%f",&y2);
	d1=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	printf("\nA distancia entre os pontos é:%f/n",sqrt(d1));
	system("PAUSE");
	return 0;
}
