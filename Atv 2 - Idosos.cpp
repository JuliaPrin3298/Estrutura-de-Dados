#include <stdio.h>   // biblioteca
#include <stdlib.h>  // para system("pause")
#include <locale.h>  // idioma

int main() {
    setlocale(LC_ALL, "Portuguese");

    int anoing, anonasc, anoat;
    int idade, temptrab;

    printf("===============================\n");
    printf("Insira seu Ano de Nascimento: ");
    scanf("%d", &anonasc);
    printf("Insira seu Ano de Ingresso na Empresa: ");
    scanf("%d", &anoing);
    printf("Insira o Ano Atual: ");
    scanf("%d", &anoat);

    idade = anoat - anonasc;
    temptrab = anoat - anoing;

    printf("\nIdade é: %d", idade);
    printf("\nAnos trabalhados são: %d", temptrab);
    printf("\nCarregando sistema de aposentadoria...\n");

    if (idade >= 65 || temptrab >= 30 || (idade >= 60 && temptrab >= 25)) {
        printf("Pode aposentar!\n");
    } else {
        printf("Não pode aposentar! - Trabalhe mais -\n");
    }

    system("pause");
}
