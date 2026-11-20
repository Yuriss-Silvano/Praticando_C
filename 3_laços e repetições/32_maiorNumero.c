/* Construa um algoritmo que leia um conjunto de 20 números inteiros
e mostre qual foi o maior valor fornecido. */

#include <stdio.h>

int main()
{
	int i, num, maior;
	
	printf("Digite o seu numero 1: \n");
	scanf("%i", &num);
	
	maior = num;
	
	for(i=2; i <= 20; i++)
	{
		printf("Digite o seu numero %i: \n", i);
		scanf("%i", &num);
		
		if(num > maior)
		{
			maior = num;
		}
	printf("O maior numero da sequencia de 20: %i \n", maior);
	}
	return 0;
} 