/* Escreva um algoritmo que calcule e mostre os 10 primeiros termos da
série de Fibonacci: 1 1 2 3 5 8 13 21 34 55 89
144 233 377. */

#include <stdio.h>

int main()
{
	int i, a = 1, b = 1, F;
	
	for(i = 1; i <= 10; i++)
	{
		printf("Sequencia %i: %i \n", i, a);
		
		F = a + b;
		a = b;
		b = F;
		 
	}
	return 0;
}