/*Uma determinada empresa fez uma pesquisa de mercado para saber se as pessoas gostaram ou não de um novo
produto lançado no mercado. Para isso forneceu o sexo do entrevistado (M masculino, F feminino) e a sua
resposta (S sim, N não). Sabendo-se que foram entrevistadas 20 pessoas, fazer um programa que calcule e
escreva:
a) o número de pessoas que responderam sim,
b) o número de pessoas que responderam não,
c) a porcentagem de pessoas do sexo feminino que responderam sim,
d) a porcentagem de pessoas do sexo masculino que responderam não. */

#include <stdio.h>
#include <ctype.h>

int main() 
{
	int i;
    char sexo, resposta;
    int total_sim = 0, total_nao = 0;
    int total_fem = 0, fem_sim = 0;
    int total_masc = 0, masc_nao = 0;
    float perc_fem_sim = 0.0, perc_masc_nao = 0.0;

    printf("PESQUISA DE LANCAMENTO DE PRODUTO  \n\n");

    // Loop fixo de 1 a 20 para as 20 entrevistas exigidas
    for (i = 1; i <= 20; i++) 
	{
        printf("Entrevistado %i \n", i);
        
        // Coleta e formata o sexo
        printf("Sexo (M - Masculino / F - Feminino): ");
        scanf(" %c", &sexo);
        sexo = toupper(sexo);

        // Coleta e formata a resposta
        printf("Gostou do novo produto? (S - Sim / N - Nao): ");
        scanf(" %c", &resposta);
        resposta = toupper(resposta);

        // a) e b) CONTABILIZA AS RESPOSTAS GERAIS
        if (resposta == 'S') {
            total_sim++;
        } else if (resposta == 'N') {
            total_nao++;
        } else {
            printf("Aviso: Resposta invalida. Contabilizada como nula. \n");
        }

        // c) e d) SEPARAÇÃO E CONTAGEM POR SEXO E RESPOSTA
        if (sexo == 'F') {
            total_fem++; // Conta o total de mulheres para o cálculo da porcentagem
            if (resposta == 'S') {
                fem_sim++;
            }
        } else if (sexo == 'M') {
            total_masc++; // Conta o total de homens para o cálculo da porcentagem
            if (resposta == 'N') {
                masc_nao++;
            }
        } else {
            printf("Aviso: Sexo invalido. \n");
        }
        
        printf("\n");
    }

    // CÁLCULO DAS PORCENTAGENS 
    // A verificação (> 0) previne erro de divisão por zero caso o grupo não tenha sido registrado
    if (total_fem > 0) {
        perc_fem_sim = ((float)fem_sim / total_fem) * 100.0;
    }
    
    if (total_masc > 0) {
        perc_masc_nao = ((float)masc_nao / total_masc) * 100.0;
    }

    // RESULTADOS 
    printf("--- RESULTADOS DA PESQUISA ---\n");
    printf("a) Numero de pessoas que responderam SIM: %i \n", total_sim);
    printf("b) Numero de pessoas que responderam NAO: %i \n", total_nao);
    printf("c) Porcentagem de mulheres que responderam SIM: %.2f%% \n", perc_fem_sim);
    printf("d) Porcentagem de homens que responderam NAO: %.2f%% \n", perc_masc_nao);

    return 0;
}
