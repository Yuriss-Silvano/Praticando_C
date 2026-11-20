/* 
Fazer um algoritmo que leia um número e mostre o seu antecessor e o seu sucessor.
 */

#include <stdio.h>

int main(){
	
	int a, b, c;
	
	printf("Digite Um numero inteiro: ");
	scanf("%i", &b);
	
	a = b - 1;
	
	c = b + 1;
	
	printf("A seguir esta os numeros antecessor, o digitado e o sucessor: %i, %i, %i", a, b, c);
	
	return 0;
}