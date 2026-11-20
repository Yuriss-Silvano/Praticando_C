/* Escreva um algoritmo que leia os valores das variáveis X e A e calcule o valor de S dado por:
S = (1/A)*(20/X) + (2/(A-1))*(19/X²) + (3/(A-2))*(18/X³) + ... + (20/(A-19))*(1/X²°) */

#include <stdio.h>
#include <math.h>

int main()
{
    float A, X, S = 0;
    int i;

    printf("Digite o valor de A: ");
    scanf("%f", &A);

    printf("Digite o valor de X: ");
    scanf("%f", &X);

    for(i = 0; i < 20; i++)
    {
        S += ((i + 1) / (A - i)) * ((20 - i) / pow(X, i + 1));
    }

    printf("Resultado: %.2f\n", S);

    return 0;
}