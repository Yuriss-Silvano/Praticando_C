/* Fazer um algoritmo que calcule e mostre a tabuada do 7. */

#include <stdio.h>

int main()
{
    int i;
    
    // O loop conta de 1 até 10
    for(i = 1; i <= 10; i++)
    {
        // Imprime a estrutura da tabuada: 7 x i = resultado
        printf("7 x %i = %i \n", i, 7 * i);	
    }
    
    return 0;
}