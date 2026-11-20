/* Faça um algoritmo que recebe dois valores inteiros e mostra o resultado da multiplicação. */
#include <stdio.h>

int main(){
	int a, b, c;
	
	printf("Digite o valor de a: ");
	scanf("%i", &a);
	
	printf("Digite o valor de b: ");
	scanf("%i", &b);
	
	c = a * b;
	
	printf("O resultado da multiplicacao: %i!", c);
	
	return 0;
}
