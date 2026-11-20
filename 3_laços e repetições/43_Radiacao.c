/* Um determinado material radioativo perde metade de sua massa a cada 50 segundos.
Dada a massa inicial, em gramas, fazer um programa que determine o tempo necessário
para que essa massa se torne menor do que 0.5 gramas.
Escrever a massa inicial, a massa final e o tempo calculated em segundos. */

#include <stdio.h>

int main()
{
    int i = 0; // tempo em segundos
    float massa0, massaf;

    printf("Digite o valor da massa inicial do material: ");
    scanf("%f", &massa0);

    massaf = massa0;

    while(massaf > 0.5)
    {
        massaf = massaf / 2;
        i = i + 50;
    }

    printf("\nMassa inicial: %.2f g\n", massa0);
    printf("Massa final: %.2f g\n", massaf);
    printf("Tempo calculado: %i segundos\n", i);

    return 0;
}