/* Faça um algoritmo que recebe um valor inteiro
e mostra se o valor é zero, positivo ou negativo. */

#include <stdio.h>

int main()
{
	int valor;
	
	printf("Digite o valor inteiro: ");
	scanf("%i", &valor);
	
	if(valor == 0)
	{
	printf("Valor nulo para esse numero inteiro!");	
	}
	else if(valor > 0)
	{
		printf("Valor positivo para esse numero inteiro!");
	}
	else
	{
		printf("Valor negativo para esse numero inteiro!");
	}
	return 0;
}