/* Fazer um algoritmo que calcule e mostre a soma dos cem primeiros números inteiros. */

#include <stdio.h>

int main()
{
	   int i, soma = 0;
	   
	   for(i = 1; i <=100; i++)
	   {
	   	// 1+2+3+4...+100=x
	   	soma += i;
	   }	   
	   	printf("A soma dos cem primeiros numeros inteiros e: %i \n", soma);
	   	
	return 0;
}