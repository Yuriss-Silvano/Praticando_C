/* Escrever um algoritmo que leia três valores inteiros distintos
e os escreva em ordem crescente. */

#include <stdio.h>

int main()
{
	int a, b, c;
	
	printf("Digite o primeiro valor inteiro:  \n");
	scanf("%i", &a);
	
	printf("Digite o segundo valor inteiro:  \n");
	scanf("%i", &b);
	
	printf("Digite o terceiro valor inteiro:  \n");
	scanf("%i", &c);
	
	if (a < b && b < c)
	{
	    // a, b, c
	    printf("A sequencia crescente 1: %i, %i, %i", a, b, c);
	}
	else if (a < c && c < b)
	{
	    // a, c, b
		printf("A sequencia crescente 2: %i, %i, %i", a, c, b);
	}
	else if (b < a && a < c)
	{
	    // b, a, c
	    printf("A sequencia crescente 3: %i, %i, %i", b, a, c);
	}
	else if (b < c && c < a)
	{
	    // b, c, a
	    printf("A sequencia crescente 4: %i, %i, %i", b, c, a);
	}
	else if (c < a && a < b)
	{
	    // c, a, b
	    printf("A sequencia crescente 5: %i, %i, %i", c, a, b);
	}
	else
	{
	    // c, b, a
	    printf("A sequencia crescente 6: %i, %i, %i", c, b, a);
	}
	
	return 0;
}