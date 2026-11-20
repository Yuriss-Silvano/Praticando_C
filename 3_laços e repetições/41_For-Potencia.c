/* Escreva um programa que calcule as n primeiras potências do
 número k. Para n = 3 e k = 2 teremos:
• 2 elevado a 1 = 2
• 2 elevado a 2 = 4
• 2 elevado a 3 = 8 */

#include <stdio.h>
#include <math.h>

int main()
{
	float K = 2, N, pot;
	
	for(N = 1; N <= 3; N++)
	{
		pot = pow(K, N);
		printf("O valor da potencia da base K elevado a N e: %.2f \n", pot);	
	}
		
	return 0;
}