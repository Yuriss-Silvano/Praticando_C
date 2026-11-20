/* Escreva um algoritmo que recebe o valor do salário fixo
 e o total de vendas efetuadas por um vendedor de uma
loja durante o mês (em dinheiro).
 Sabendo que este vendedor ganha 15% de comissão sobre suas vendas
efetuadas, informar o salário fixo e salário no final do mês.
 */
#include <stdio.h>

int main(){
    float fixo = 1500;
    float vendas, comissao, total;

    printf("Salario fixo: %2.f \n",fixo);

    printf("Insira a quantidade de vendas do vendedor: \n");
    scanf("%f", &vendas);

    comissao = fixo * (vendas * 0.15);

    printf("O valor da comissao: %.2f \n" ,comissao);

    total = fixo + comissao;

    printf("O salario fixo: %2.f. \n valor do salario desse vendedor neste mes, e de: R$ %.2f", fixo, total);

    return 0;
}