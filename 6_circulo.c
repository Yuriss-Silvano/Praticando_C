/* Faça um algoritmo que recebe o valor do raio de um círculo
 e apresenta o valor da área desse círculo.
 */

#include <stdio.h>

 int main()
 {
 	const float PI = 3.14159;
 	float raio, area;
 	
 	printf("A formula para calcular a area de um circulo e igual a: PI x (raio^2). \n");
 	
 	printf("Inserir o valor do raio: ");
 	scanf("%f", &raio);
 	
 	 // Fórmula da área do círculo
 	area = PI * (raio * raio);
 	
 	printf("O valor da area do circulo e aproximadamente: %.2f", area);
 	
 	return 0;
 }