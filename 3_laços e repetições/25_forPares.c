/* Faça um algoritmo que mostre os números pares compreendidos entre 14 e 30 (inclusive). */

#include <stdio.h>

int main()
{
	int numeros;
	
	for( numeros = 14; numeros <= 30; numeros++)
	{
	if(numeros % 2 == 0)
	{
		printf("Esse valor e par: %i\n", numeros);
	}		
	}
	
	return 0;
}