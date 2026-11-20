/* Faça um algoritmo que recebe um valor
e mostra se o mesmo é par ou ímpar. */

#include <stdio.h>

int main()
{
	int valor;
	
	printf("Digite o seu valor: ");
	scanf("%i", &valor);
	
	if(valor % 2 == 0)
	{
		printf("O numero digitado e par!");
	}
	else
	{
		printf("O numero digitado e impar!");
	}
	return 0;
}