/* Faça um algoritmo que leia dois números e identifique se são iguais ou diferentes.
Caso eles sejam iguais, mostre
uma mensagem dizendo que eles são iguais. 
Caso sejam diferentes, informe qual número é o maior, e uma
mensagem que são diferentes. */

#include <stdio.h>

int main()
{
	int a, b;
	
	printf("Digite o valor de a inteiro: \n");
	scanf("%i", &a);
	
	printf("Digite o valor de b inteiro: \n");
	scanf("%i", &b);
	
	printf("Os numero inteiros sao: \n %i \n %i \n", a, b);
	
	if(a == b)
	{
		printf("a e b sao valores iguais, ou a=b \n");
	}
	
	else if(a > b)
	{
		printf("a e b sao valores diferentes. \n");
		printf("A razao: (a)%i>(b)%i", a, b);
	}
	else
	{
		printf("a e b sao valores diferentes. \n");
		printf("A razao: (b)%i>(a)%i", b, a);
	}

	return 0;
}