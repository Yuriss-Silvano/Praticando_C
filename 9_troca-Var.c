/* Ler dois valores para as variáveis A e B,
e efetuar as trocas dos valores de forma que a variável A passe a possuir
o valor da variável B e a variável B passe a possuir o valor da variável A.
Apresentar os valores trocados. */

#include <stdio.h>

int main() 
{
	int A, B, temp;
	
	printf("Digite o valor de A: ");
	scanf("%i", &A);
	
	printf("Digite o valor de B: \n");
	scanf("%i", &B);
	
	printf("O atual valor de A: %i \n", A);
	printf("O atual valor de B: %i \n \n", B);
	
	temp = A;
	A = B;
	B = temp;
	
	printf("O atual valor de A apos a troca: %i \n", A);
	printf("O atual valor de B apos a troca: %i \n", B);
	
	return 0;
}