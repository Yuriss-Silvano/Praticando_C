/* Escrever um algoritmo que leia três valores inteiros
e verifique se eles podem ser os lados de um triângulo.
Se forem, informar qual o tipo de triângulo que eles formam:
equilátero, isósceles ou escaleno.
• Propriedade: o comprimento de cada lado de um triângulo
é menor do que a soma dos comprimentos dos outros dois lados.

• Triângulo Equilátero: aquele que tem os comprimentos dos três lados iguais;

• Triângulo Isósceles: aquele que tem os comprimentos de dois lados iguais.
Portanto, todo triângulo equilátero é também isósceles;

• Triângulo Escaleno: aquele que tem os comprimentos de seus três lados diferentes. */

#include <stdio.h>

int main()
{
	float a, b, c;
	
	printf("Digite os lados a b c: ");
	scanf("%f %f %f", &a, &b, &c);
	
	if((a + b > c) && (a + c > b) && (b + c > a))
	{
		printf("E um triangulo! \n");
		
		if((a == b) && (b == c))
		{
			printf("Triangulo equilatero.");
		}
		else if((a != b) && (b != c) && (c != a))
		{
			printf("Triangulo escaleno.");
		}
		else
		{
			printf("Triangulo isoceles.");
		}
	}
	else
	{
		printf("Nao e um triangulo!");
	}
	return 0;
}