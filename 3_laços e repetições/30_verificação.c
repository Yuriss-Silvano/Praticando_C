/* Fazer um algoritmo que leia 5 números e verifique se ele está entre 100 e 200.
Se estiver na faixa, mostrar "Você digitou um número entre 100 e 200", se não estiver na faixa,
mostrar "Você digitou um número fora da faixa entre 100 e 200". */

#include <stdio.h>

int main()
{
	int i, num;
	
	printf("Digite 5 numeros inteiros. \n");
	
	
	for(i = 1; i <=5 ; i++)
		
	{
		
	printf(" Numero %i: ", i);
	scanf("%i", &num);
	
	if(num >= 100 && num <= 200)
	{
		printf("Voce digitou um numero entre 100 e 200 \n");
	}
	
	else
	{
		printf("Voce digitou um numero fora da faixa entre 100 e 200 \n");
	}
	
	}
	
	return 0;
}