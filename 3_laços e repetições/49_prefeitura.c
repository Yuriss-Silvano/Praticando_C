/* A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e o número
de filhos. A prefeitura deseja saber:
a) A média do salário da população;
b) A média do número de filhos;
c) O maior salário;
d) A porcentagem de pessoas com salários até R$ 1000,00. */

#include <stdio.h>

int main()
 {
    float salario, soma_salarios = 0.0, maior_salario = 0.0;
    int filhos, soma_filhos = 0, total_pessoas = 0, pessoas_ate_1000 = 0;
    float media_salario, media_filhos, percentual_ate_1000;

    printf(" PESQUISA DA PREFEITURA \n");
    printf("Digite um salario negativo a qualquer momento para encerrar e ver os resultados.\n\n");

    while (1) {
        printf("Digite o salario do habitante: R$ ");
        scanf("%f", &salario);

        if (salario < 0) {
            break;
        }

        printf("Digite o numero de filhos do habitante: ");
        scanf("%d", &filhos);

        
        soma_salarios += salario; 
        soma_filhos += filhos;    
        total_pessoas++;          

        
        if (salario > maior_salario) {
            maior_salario = salario;
        }

        
        if (salario <= 1000.0) {
            pessoas_ate_1000++;
        }
        
        printf("\n"); 
    }

    if (total_pessoas > 0) {
        media_salario = soma_salarios / total_pessoas;
        media_filhos = (float)soma_filhos / total_pessoas; 
        percentual_ate_1000 = ((float)pessoas_ate_1000 / total_pessoas) * 100.0;

        printf("\n  RESULTADOS DA PESQUISA  \n");
        printf("Total de entrevistados: %d\n", total_pessoas);
        printf("a) Media do salario da populacao: R$ %.2f\n", media_salario);
        printf("b) Media do numero de filhos: %.2f\n", media_filhos);
        printf("c) O maior salario: R$ %.2f\n", maior_salario);
        printf("d) Percentual de pessoas com salario ate R$ 1000,00: %.2f%%\n", percentual_ate_1000);
    } else {
        printf("\n Nenhum dado foi inserido na pesquisa.\n");
    }

    return 0;
}