/* Tendo como entrada a altura (h) e o sexo (1: feminino e 2: masculino) de uma pessoa,
 construa um algoritmo que calcule e mostre o seu peso ideal, calculated da seguinte maneira:
homens: 72.7 * h - 58
mulheres: 62.1 * h - 44.7
A altura negativa indica o fim da entrada de dados e do algoritmo */

#include <stdio.h>

int main()
{
    float h, massa;
    int genero;

    while(1)
    {
        printf("Qual a altura do individuo: ");
        scanf("%f", &h);

        if(h < 0)
        {
            printf("Fim do algoritmo!\n");
            break;
        }

        printf("Mulher digite: (1) e Homem digite: (2): ");
        scanf("%i", &genero);

        if(genero == 1)
        {
            massa = 62.1 * h - 44.7;
            printf("O peso ideal e: %.2f kg\n", massa);
        }
        else if(genero == 2)
        {
            massa = 72.7 * h - 58;
            printf("O peso ideal e: %.2f kg\n", massa);
        }
        else
        {
            printf("Digite apenas 1 ou 2.\n");
        }
    }

    return 0;
}