#include<stdio.h>
#include<stdlib.h>


int main ()
{
  int a,b,c ;
  
  printf("Informe o primeiro valor");
  sacanf("%d",&a);
  
  printf("Informe o segundo valor");
  sacanf("%d",&b);
 
  printf("Informe o terceiro valor");
  sacanf("%d",&c);
 	
 if ((a==0 || b==0 || c==0 || (a+b<c||a+c<b||b=c<a)){
 	printf("os valores n�o s�o um triangolo");
 }
 
 else {
 	
	 printf("Os valores s�o de um triangolo");
 }
  
 system("pause");
}
