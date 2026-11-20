/* Fazer um algoritmo que calcule e mostre a área e o volume de um cilindro
 (A = 2pr(h + r),
  V = pr²h).
 */

#include <stdio.h>

int main()
{
	const float PI = 3.14159;
	// h = altura | r = raio
	float h, r, A, V;
	
	printf("Digite o valor do seu raio: ");
	scanf("%f", &r);
		
	printf("Digite o valor da altura: ");
	scanf("%f", &h);
	
	//formula da area do cilindro
	A = 2 * PI * r * (h+r);
	
	//formula do volume do cilindro
	V = PI * (r * r) * h;
	
	printf("O resultado da area do cilindro: %.2f \n", A);
	printf("O resultado do volume do cilindro: %.2f \n", V);
	
	return 0;
}