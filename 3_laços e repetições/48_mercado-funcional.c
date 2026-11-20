/* Construa um algoritmo que calcule e apresente o total da compra realizada pelo cliente em uma loja.
 São fornecidos para o algoritmo, o preço da etiqueta (PE) de cada um dos produtos comprados e, com a compra
encerrada (PE = 0), a condição de pagamento escolhida pelo cliente (CP).
Utilize para os cálculos a tabela de
condições de pagamento a seguir:

Tabela 2: Condição de pagamento de cada código.
Código Condição de Pagamento

1 À vista em dinheiro ou cheque, com 10% de desconto
2 À vista com cartão de crédito, com 5% de desconto
3 Em 2 vezes, preço normal de etiqueta sem juros
4 Em 3 vezes, preço de etiqueta com acréscimo de 10% */

#include <stdio.h>

int main()
 {
    float pe, total_etiqueta = 0.0, total_final = 0.0;
    int cp;

    printf(" REGISTRO DE COMPRAS  \n");
    printf("Digite o preco de cada produto (Digite 0 para encerrar):\n");

    
    while (1) {
        printf("Preco do produto (PE): R$ ");
        scanf("%f", &pe);

        if (pe == 0) {
            break; 
        } else if (pe < 0) {
            printf("Preco invalido! Insira um valor positivo.\n");
            continue;
        }

        total_etiqueta += pe; 
    }

    
    if (total_etiqueta == 0) {
        printf("\nNenhuma compra foi registrada.\n");
        return 0;
    }

    printf("\nTotal dos produtos: R$ %.2f\n", total_etiqueta);
    
    
    printf("\n  CONDICOES DE PAGAMENTO  \n");
    printf("1 - A vista em dinheiro ou cheque (10%% de desconto) \n");
    printf("2 - A vista com cartao de credito (5%% de desconto) \n");
    printf("3 - Em 2 vezes, preco normal de etiqueta sem juros \n");
    printf("4 - Em 3 vezes, preco de etiqueta com acrescimo de 10%% \n");
    printf("Digite o codigo da condicao escolhida: ");
    scanf("%d", &cp);

    
    switch (cp)
	 {
        case 1:
            total_final = total_etiqueta * 0.90; 
            printf("\nPagamento a vista (dinheiro/cheque).\n");
            printf("Total a pagar: R$ %.2f\n", total_final);
            break;
            
        case 2:
            total_final = total_etiqueta * 0.95; 
            printf("\nPagamento a vista (cartao de credito).\n");
            printf("Total a pagar: R$ %.2f\n", total_final);
            break;
            
        case 3:
            total_final = total_etiqueta;
            printf("\nPagamento em 2 vezes sem juros.\n");
            printf("Total a pagar: R$ %.2f (2 parcelas de R$ %.2f)\n", total_final, total_final / 2);
            break;
            
        case 4:
            total_final = total_etiqueta * 1.10; 
            printf("\nPagamento em 3 vezes com acrescimo de 10%%. \n");
            printf("Total a pagar: R$ %.2f (3 parcelas de R$ %.2f) \n", total_final, total_final / 3);
            break;
            
        default:
            printf("\nErro: Codigo de pagamento invalido! Nao foi possivel calcular o total. \n");
    }

    return 0;
}