/* Questão 24 
Escreva um programa que calcule o Valor a Pagar pela conta de energia elétrica para uma determinada Classe
Consumidora.

 Veja as informações a seguir:
 
a. O programa deve receber como dados de entrada: o tipo da Classe Consumidora, (conforme definido na
Tabela 1) e o Consumo em quilowatts/hora (KWh);

b. O cálculo do Valor do Fornecimento (VF), em Reais (R$), é definido pela seguinte fórmula:
 VF = Consumo * Tarifa,
  onde a tarifa é definida na Tabela 1, conforme a classe consumidora;

c. O Valor a Pagar (VP) é definido pela seguinte fórmula: VP = VF + ICMS, onde a taxa de ICMS é calculada
aplicando uma alíquota de 30% ao valor do fornecimento (ICMS = 0.3 * VF).
 */

#include <stdio.h>

int main()
{
	char classe;
	float tarifa, icms, consumo, vf, vp;
	char nome[100];
	
	printf("Digite o seu nome: ");
	fgets(nome, 100, stdin);
	
	printf("Digite o seu consumo: ");
	scanf("%f", &consumo);
	
	printf("Digite a classe consumidora(A, B ou C): ");
	scanf(" %c", &classe);
	
	//CONDIÇÃO DE ESCOLHA DO USUARiO
	switch(classe)
	{
	case 'A':
	case 'a':
		tarifa = 0.5;
		break;
	
	case 'B':
	case 'b':
		tarifa = 0.8;
		break;
	
	case 'C':
	case 'c':
		tarifa = 1.0;
		break;
	
	default:
		printf("Digite A,B ou C.");
		break;
	}
	
	vf = consumo * tarifa;
	icms = 0.3;
	vp = vf + (vf * icms);
	
	printf("O valor a pagar e: %.2f", vp);
	
	return 0;
}