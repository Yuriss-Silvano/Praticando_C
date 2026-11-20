/* Escreva um algoritmo para ler 2 valores inteiros
e uma das seguintes operações a serem executadas:
1. Adição, 2.Subtração, 3. Divisão e 4. Multiplicação.
Calcular e mostrar o resultado da operação. */

#include <stdio.h>

int main()
{
	int a, b, c, operador;
	
	printf("============================================================= \n");
	printf("Digite o valor inteiro de a: ");
	scanf("%i", &a);
	
	printf("Digite o valor inteiro de b: ");
	scanf("%i", &b);
	printf("============================================================= \n \n");
	
	printf("============================================================= \n");
	printf("Escolha uma das 4 operacoes para realizar um calculo com as variavies digitadas:  \n");
	printf("============================================================= \n \n");
	
	
	printf("============================================================= \n \n");
	printf("(1)Soma, (2)subtracao, (3)multiplicacao, (4)divisao. \n");
	printf("Digite a sua opcao:  ");
	scanf("%i", &operador);
	printf("============================================================= \n \n");
	
	
		
	if(operador == 1)
	{
		c = a + b;
		printf("============================================================= \n");
		printf("Voce escolheu a opcao soma, eis o resultado: %i \n", c);
		printf("============================================================= \n \n");
	}
	else if(operador == 2)
	{
		c = a - b;
		printf("============================================================= \n");
		printf("Voce escolheu a opcao subtracao, eis o resultado: %i \n", c);
		printf("============================================================= \n \n");
	}
	else if(operador == 3)
	{
		c = a * b ;
		printf("============================================================= \n");
		printf("Voce escolheu a opcao multiplicacao, eis o resultado: %i \n", c);
		printf("============================================================= \n \n");
	}
	else if(operador == 4)
	{
		c = a / b ;
		printf("============================================================= \n");
		printf("Voce escolheu a opcao divisao, eis o resultado: %i \n", c);
		printf("============================================================= \n \n");
	}
	else
	{
		printf("============================================================= \n" );
		printf("Voce nao escolheu as opcoes de operacoes disponiveis! \n");	
		printf("=============================================================");
	}
	return 0;
}