/* Calcular e mostrar a média aritmética
dos números pares compreendidos entre 13 e 73. */

#include <stdio.h>

int main()
{
	int i, soma = 0.0, quantidade = 0.0;
	float med;
	
	for(i = 13.0; i <= 73.0; i++)
	{
		if(i % 2 == 0);
		{
		soma += i;
		quantidade++;

		}
	}
	
	med = soma / quantidade;
		
	printf("Esse e o valor da media entre 13 e 73: %.2f", med);

	return 0;
}