/* Construa um algoritmo que leia vários números inteiros e positivos,
calculando ao final da sequência a soma e a média desses números.
A sequência termina quando o usuário digitar um valor negativo. */

#include <stdio.h>

int main()
{
    int n, soma = 0, quantidade = 0;
    float media;

    printf("Digite numeros inteiros e positivos. \n");
    printf("Para encerrar, digite um valor negativo. \n");

    printf("Digite um numero: ");
    scanf("%i", &n);

    while(n >= 0)
    {
        soma += n;
        quantidade++;

        printf("Digite um numero: ");
        scanf("%i", &n);
    }

    media = (float)soma / quantidade;

    printf("\nO valor da soma e: %i \n", soma);
    printf("A media dos numeros e: %.2f \n", media);

    return 0;
}