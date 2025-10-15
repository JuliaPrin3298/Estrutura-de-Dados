#include <stdio.h>
#include <locale.h>

void pesquisaPrefeitura() {
    float salario, somaSalario = 0, maiorSalario = 0;
    int filhos, somaFilhos = 0;
    int qtdPessoas = 0, qtdAte1412 = 0;

    printf("=== PESQUISA DA PREFEITURA ===\n");
    printf("Digite um salário negativo para encerrar.\n\n");

    do {
        printf("Informe o salário: R$ ");
        scanf("%f", &salario);

        if (salario >= 0) {
            printf("Informe o número de filhos: ");
            scanf("%d", &filhos);

            somaSalario += salario;
            somaFilhos += filhos;
            qtdPessoas++;

            if (salario > maiorSalario) {
                maiorSalario = salario;
            }

            if (salario <= 1412.0) {
                qtdAte1412++;
            }

            printf("\n==========================================\n");
        }

    } while (salario >= 0);

    if (qtdPessoas == 0) {
        printf("\nNenhum dado foi inserido.\n");
    } else {
        float mediaSalario = somaSalario / qtdPessoas;
        float mediaFilhos = (float)somaFilhos / qtdPessoas;
        float percentual1412 = ((float)qtdAte1412 / qtdPessoas) * 100;

        printf("\n==== RESULTADOS DA PESQUISA ====\n");
        printf("Média de salário da população: R$ %.2f\n", mediaSalario);
        printf("Média do número de filhos: %.2f\n", mediaFilhos);
        printf("Maior salário: R$ %.2f\n", maiorSalario);
        printf("Percentual com salário até R$1412,00: %.2f%%\n", percentual1412);
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    pesquisaPrefeitura();
    return 0;
}
