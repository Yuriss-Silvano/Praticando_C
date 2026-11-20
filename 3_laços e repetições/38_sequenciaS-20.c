/* Faça um algoritmo que leia um valor, calcule e mostre os 20 primeiros termos da série:
 S = 1/(x-1) + 1/(x-2) + 1/(x-3) */

#include <stdio.h>

int main()
{
	int i;
	float S, valor;
	   
	printf("Digite um valor: \n");
	scanf("%f", &valor);
		
	for(i = 1; i <= 20; i++)
	{
		S = 0;
		S += 1 / (valor - (float)i);
		
		printf("Os 20 valores da sequencia, com o valor '%.2f' e:  %.2f \n", valor, S );
	}
	
	return 0;
}