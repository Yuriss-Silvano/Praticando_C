/* 
Fazer um algoritmo que obtenha dois números inteiros, x e y,
 mostre o quociente e o resto da divisão inteira entre
eles.
 */

#include <stdio.h>

int main()
{
	int x, y, quociente, resto;
	
	printf("Digite o valor inteiro de x: ");
	scanf("%i", &x);
	
	printf("Digite o valor inteiro de y: ");
	scanf("%i", &y);
	
	quociente = x/y;
	
	resto = x%y;
	
	printf("O valor do quociente entre x e y: %i \n", quociente);
	printf("O valor do resto da divisao entre x e y: %i", resto);
	
	return 0;
}