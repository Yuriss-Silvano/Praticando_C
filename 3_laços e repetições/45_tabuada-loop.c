/* Construa um algoritmo que apresente a tabuada de um número N.
 O valor de N será fornecido pelo usuário. */

#include <stdio.h>

int main()
{
    int N, i, produto;

    printf("Digite o numero que voce deseja a tabuada: ");
    scanf("%i", &N);

    for(i = 1; i <= 10; i++)
    {
        produto = N * i;
        printf("%i x %i = %i \n", N, i, produto);
    }

    return 0;
}