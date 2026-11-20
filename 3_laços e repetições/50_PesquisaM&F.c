/* Tem-se um conjunto de dados contendo a altura e o sexo (M ou F) de 15 pessoas.
 Faça um programa que calcule e mostre:
a) a maior e a menor altura do grupo;
b) a média de altura das mulheres;
c) o número de homens */

#include <stdio.h>
#include <ctype.h>

int main()
{
    float altura;
    float maior_altura = 0.0;
    float menor_altura = 0.0;
    float soma_altura_mulheres = 0.0;
    float media_mulheres;

    char sexo;

    int cont_homens = 0;
    int cont_mulheres = 0;
	int i;
	
    printf("PESQUISA DE ALTURA E SEXO\n\n");

    for(i = 1; i <= 15; i++)
    {
        printf("Dados da %i a pessoa:\n", i);

        printf("Altura: ");
        scanf("%f", &altura);

        printf("Sexo (M ou F): ");
        scanf(" %c", &sexo);

        sexo = toupper(sexo);

        if(i == 1)
        {
            maior_altura = altura;
            menor_altura = altura;
        }
        else
        {
            if(altura > maior_altura)
            {
                maior_altura = altura;
            }

            if(altura < menor_altura)
            {
                menor_altura = altura;
            }
        }

        if(sexo == 'F')
        {
            soma_altura_mulheres += altura;
            cont_mulheres++;
        }
        else if(sexo == 'M')
        {
            cont_homens++;
        }
    }

    printf("\n RESULTADOS \n");

    printf("a) Maior altura: %.2f m\n", maior_altura);
    printf("   Menor altura: %.2f m\n", menor_altura);

    if(cont_mulheres > 0)
    {
        media_mulheres = soma_altura_mulheres / cont_mulheres;
        printf("b) Media de altura das mulheres: %.2f m\n", media_mulheres);
    }
    else
    {
        printf("b) Nenhuma mulher foi registrada.\n");
    }

    printf("c) Numero de homens: %i \n", cont_homens);

    return 0;
}