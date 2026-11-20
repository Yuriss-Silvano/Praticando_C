/* Escreva um algoritmo para calcular as raízes de uma equação do 2º grau
pela fórmula x = (-b ± vD) / (2a)
onde D = b² - 4ac é o discriminante da equação.
Para o discriminante há três possíveis situações:
a) Se D < 0, não há solução real, pois não existe raiz quadrada de número negativo.
b) Se D = 0, há duas soluções iguais: x1 = x2 = -b / (2a)
c) Se D > 0, há duas soluções reais e diferentes: x1 e x2. */

#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c, delta;
	
	printf("Digite o valor de a: ");
	scanf("%f", &a);
	
	printf("Digite o valor de b: ");
	scanf("%f", &b);
	
	printf("Digite o valor de c: ");
	scanf("%f", &c);
	
	delta = b * b - 4 * a * c;
	
	if(delta < 0)
	{
		printf("Nao existe solucao entre os numeros reais em R");
	}
	
		else if(delta == 0)
		{
			float x;
			
			x = -(-b / 2 * a);
			
			printf("x = %.2f.", x);
		}
		
		else
		{
			float x1, x2;
			
			x1 = (-b + sqrtf(delta)) / (2 * a);
			x2 = (-b - sqrtf(delta)) / (2 * a) ;
			
			printf("x1 = %.2f. , x2 = %.2f.", x1, x2);
		}
		return 0;
	}