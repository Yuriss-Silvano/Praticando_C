/* As maçãs custam R$ 0,30 cada, se forem compradas menos do que uma dúzia,
 e R$ 0,25 se forem compradas pelo menos doze.
Escreva um algoritmo que leia o número de maçãs compradas,
calcule e mostre o valor total da compra. */

#include <stdio.h>

int main()
{
    int qmacas;
    float valor;

    printf("Qual a quantidade de macas a serem compradas?\n");
    scanf("%i", &qmacas);

    if(qmacas < 12)
    {
        float maca = 0.30;
        valor = maca * qmacas;
        printf("O valor da sua compra e de R$ %.2f", valor);
    }
    else
    {
        float maca = 0.25;
        valor = maca * qmacas;
        printf("O valor da sua compra e de R$ %.2f", valor);
    }
    

    return 0;
}