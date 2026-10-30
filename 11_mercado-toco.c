/* Faça um algoritmo que auxiliará um funcionário de um caixa de supermercado.
 O algoritmo deverá receber como
entrada o valor da compra do cliente e o valor pago pelo cliente,
 em seguida o algoritmo deverá apresentar o troco
da compra, de forma que o mesmo deve apresentar a quantidade
 de cédulas e moedas para compor o troco do cliente. */
 
 #include <stdio.h>

int main()
{
    float compra, pago;
    int compraCentavos, pagoCentavos, troco;

    int nota200, nota100, nota50, nota20, nota10, nota5, nota2;
    int moeda1, moeda050, moeda025, moeda10, moeda5;

    printf("Digite o valor em R$ da compra do cliente: ");
    scanf("%f", &compra);

    printf("Digite o valor pago pelo cliente: ");
    scanf("%f", &pago);

    compraCentavos = compra * 100;
    pagoCentavos = pago * 100;

    troco = pagoCentavos - compraCentavos;

    nota200 = troco / 20000;
    troco = troco % 20000;

    nota100 = troco / 10000;
    troco = troco % 10000;

    nota50 = troco / 5000;
    troco = troco % 5000;

    nota20 = troco / 2000;
    troco = troco % 2000;

    nota10 = troco / 1000;
    troco = troco % 1000;

    nota5 = troco / 500;
    troco = troco % 500;

    nota2 = troco / 200;
    troco = troco % 200;
    
    moeda1 = troco / 100;
    troco = troco % 100;
    
    moeda050 = troco / 50;
    troco = troco % 50;
    
    moeda025 = troco / 25;
    troco = troco % 25;
    
    moeda10 = troco / 10;
    troco = troco % 10;
    
    moeda5 = troco / 5;
    troco = troco % 5;
    
printf("Valor troco: %i \n notas \n 200: %i \n 100: %i \n 50: %i \n 20: %i \n 10: %i \n 5: %i \n 2: %i \n 1: %i \n 0.50: %i \n 0.25: %i \n 0.10: \n 0.05: %i \n Sobrou R$ %i centavos. \n", troco, nota200, nota100, nota50, nota20, nota10, nota5, nota2, moeda1, moeda050, moeda025, moeda10, moeda5);
printf("Troco recomendado.");

    return 0;
}