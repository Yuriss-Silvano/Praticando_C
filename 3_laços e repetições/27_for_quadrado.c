/* Fazer um algoritmo que calcule e mostre o quadrado dos números inteiros compreendidos entre 15 e 30. */

#include <stdio.h>

int main()
{
	int i, quadrado;
 
 // i * i = q
 
	for(i = 15; i <= 30; i++)
	{
 		quadrado = i * i;
 		
	 	printf("O quadrado de %i: %i \n", i, quadrado);
	  }	
	return 0;
}