/* Construa um algoritmo que calcule e mostre o valor de H,
sendo H calculated por: H = 1 + 2 + 3 + 4 + ... + N */

#include <stdio.h>

int main()
{
	int H = 0, limite, i;
	
	printf("Ate que numero voce quer o somatorio de H? \n");
	scanf("%i", &limite);
	printf("O limite de H definido foi: %i \n", limite);
	
	for(i = 1; i <= limite; i++)
	{
		H += i;
	}
	printf("O valor de H e: %i", H);
	return 0;
}