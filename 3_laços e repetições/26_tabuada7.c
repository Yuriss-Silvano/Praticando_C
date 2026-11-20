/* Fazer um algoritmo que calcule e mostre a tabuada do 7. */

#include <stdio.h>

int main()
{
	int produto;
	
	for(produto = 7; produto <= 70; produto++)
	{
		if(produto % 7 == 0)
		{
		 printf("Tabuada do numero 7: %i \n", produto);	
		}
	}
	return 0;
}