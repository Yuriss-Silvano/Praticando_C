/* A conversão de graus Fahrenheit para Celsius é obtida por
 c = (5/9) * (f - 32).
Faça um algoritmo que calcule e escreva uma tabela de graus Celsius em graus Fahrenheit,
cujos graus variem de 50 a 65 de 1 em 1. */

#include <stdio.h>

int main()
{
	int f, min, max;
	float cel;
	
	printf("Digite a temperatura minima: \n");
	scanf("%i", &min);
	
	printf("Digite a temperatura maxima: \n");
	scanf("%i", &max);
	
	printf("Tabela de conversao F -> C \n");
	
	for(f = min; f <= max; f++)
	{
		cel = (5.0 / 9.0) * (f - 32.0);
		
		printf("%i F = %.2f C \n", f, cel);
	}
	
	return 0;
}