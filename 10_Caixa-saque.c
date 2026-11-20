/* Faça um algoritmo que mostra a quantidade de cédulas 
de um caixa eletrônico de um banco. O algoritmo recebe
como entrada o valor inteiro a ser sacado pelo cliente,
em seguida apresente a quantidade de cada cédula que o
cliente deverá receber, de forma que a quantidade de cédulas seja o menor possível. */

#include <stdio.h>

int main()
{
	int nota200, nota100, nota50, nota20, nota10, nota5, nota2, saque, valor;
	
	printf("Digite o valor a sacar: ");
	scanf("%i", &saque);
	
	nota200 = saque / 200;
	valor = saque % 200;
	
	nota100 = valor / 100;
	valor = valor % 100;
	
	nota50 = valor / 50;
	valor = valor % 50;
	
	nota20 = valor / 20;
	valor = valor % 20;
	
	nota10 = valor / 10;
	valor = valor % 10;
	
	nota5 = valor / 5;
	valor = valor % 5;
	
	nota2 = valor / 2;
	valor = valor % 2;
	
	printf("Valor total: %i \n notas \n 200: %i \n 100: %i \n 50: %i \n 20: %i \n 10: %i \n 5: %i \n 2: %i \n Sobrou: %i.",
	 saque, nota200, nota100, nota50, nota20, nota10, nota5, nota2, valor); 
	
	return 0;
}