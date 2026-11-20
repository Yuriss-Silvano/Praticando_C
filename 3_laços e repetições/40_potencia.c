/* Escreva um algoritmo que leia os valores de K e N.
 Calcule e mostre o valor de K^N */

#include <stdio.h>
#include <math.h>

int main()
{
	float K, N, pot;
	
	printf("Insira o valor numerico de K: \n");
	scanf("%1f", &K);
	
	printf("Insira o valor numerico de N: \n");
	scanf("%1f", &N);
	
	pot = pow(K, N);
	
	printf("O valor da potencia da base K elevado a N e: %.2f \n", pot);
		
	return 0;
}