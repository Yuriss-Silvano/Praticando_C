/* Calcular o valor de S dado pela sequência:
 S = 1 + 1/2 + 1/3 + 1/4 + ... + 1/10. */
 
#include <stdio.h>

int main()
{
	float S = 0, i;
	
	for(i = 1; i <= 10; i++)
	{
		S = S + 1/ i;
	}
	
	printf("O valor de S dado pela sequência e: %.2f: \n", S);
	
	return 0;
}