/* Escreva um algoritmo que recebe três valores inteiros
e mostre o valor do maior número digitado pelo usuário. */

#include <stdio.h>

int main()
{
	int a, b, c;
	
	printf("Digite o valor inteiro de a: \n");
	scanf("%i", &a);
	
	printf("Digite o valor inteiro de b: \n");
	scanf("%i", &b);
	
	printf("Digite o valor inteiro de c: \n");
	scanf("%i", &c);
	
	if(a > b && a > c)
	{
		printf("o primeiro valor e maior que o segundo e terceiro.");
	}
	else if(b > a && b > c)
	{
		printf("o segundo valor e maior que o primeiro e terceiro.");
	}
	else
	{
		printf("o terceiro valor e maior que o segundo e primeiro.");
	}
	
	return 0;
}