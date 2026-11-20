/* Faça um algoritmo para calcular n! (fatorial de um número n),
 sendo que o valor de n é fornecido pelo usuário.
Sabe-se que: n! = 1 * 2 * 3 * ... * (n-1) * n e 0! = 1, por definição. */

#include <stdio.h>

int main()
{
    int i, n;
    unsigned long long fatorial = 1;

    printf("CALCULADORA DE FATORIAL\n");
    printf("Digite um numero inteiro nao negativo: ");
    scanf("%i", &n);

    if(n < 0)
    {
        printf("Erro: o fatorial nao existe para numeros negativos.\n");
    }
    else
    {
        for(i = 1; i <= n; i++)
        {
            fatorial *= i;
        }

        printf("%i! = %llu\n", n, fatorial);
    }

    return 0;
}