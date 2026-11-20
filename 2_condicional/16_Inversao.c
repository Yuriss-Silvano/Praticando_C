/* Faça um algoritmo que recebe um valor inteiro,
caso esse número seja positivo, mostre o valor digitado,
caso seja negativo mostre o valor digitado com o sinal invertido. */

#include <stdio.h>

int main()
{
	int valor;
	
	printf("Digite o seu valor: ");
	scanf("%i", &valor);
	
	if(valor > 0)
	{
		printf("O seu valor positivo digitado: %i", valor);
	}
	else
	{
		valor = (-1) * valor;
		printf("O seu valor digitado negativo com sinal invertido: %i", valor);
	}
}