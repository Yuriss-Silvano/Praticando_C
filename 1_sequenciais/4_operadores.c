/*
Fazer um algoritmo que calcule e mostre:
a) A soma entre dois números
b) O produto entre eles e
c) O quociente entre eles. 
*/

#include <stdio.h>

int main(){
	int a, b, soma, produto, quociente;
	
	printf("Digite o valor de a: ");
	scanf("%i", &a);
	
	printf("Digite o valor de b: ");
	scanf("%i", &b);
	
	// Operações matemáticas
	soma = a + b;
	
	produto = a * b;
	
	quociente = a / b;
	
	printf("O valor da soma entre a + b = %i \n", soma);
	printf("O valor do produto entre a * b = %i \n", produto);
	printf("O valor do quociente entre a / b = %i \n", quociente);
	
	return 0;	
}