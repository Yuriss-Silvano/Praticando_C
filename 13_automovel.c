/* O preço de um automóvel é calculated pela soma do preço de fábrica,
o preço dos impostos (45% do preço defábrica) 
e a porcentagem do revendedor (28% do preço de fábrica).
Fazer um algoritmo que leia o preço de fábrica.
Calcule e mostre o preço final do carro. */

#include <stdio.h>

int main()
{
	float imposto = 0.45;
	float taxaVenda = 0.28;
	float precoFabrica, precoCompleto;
	
	printf("Adicione o valor em R$ do preco de fabrica do automovel: \n");
	scanf("%f", &precoFabrica);
	
	imposto = imposto * precoFabrica;
	
	taxaVenda = taxaVenda * precoFabrica;
	
	precoCompleto = precoFabrica + imposto + taxaVenda;
	
	printf("Conforme a tributacao atual, o preco recomendado do automovel em reais e: R$ %.2f", precoCompleto );
	
	return 0;
}