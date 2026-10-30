/*
Fazer um algoritmo que converta centímetros para polegadas
(obs.: 1 pol = 2.54 cm).
*/

#include <stdio.h>

int main() {
    float cm, conversao;
    const float pol0 = 2.54;

    printf("Quantos centimetros queres transformar para polegadas: ");
    scanf("%f", &cm);

    conversao = cm / pol0;

    printf("Os centimetros: %f para conversao em polegadas sao: %f", cm, conversao);

    return 0;
}