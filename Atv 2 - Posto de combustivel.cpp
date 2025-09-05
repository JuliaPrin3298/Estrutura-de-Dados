#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    
    char comb;
    float litro, total, desc, totalt;

    printf("\n SELECIONE TIPO DE COMBUSTÍVEL: (A - Álcool | G - Gasolina): ");
    scanf(" %c", &comb); // espaço antes do %c evita pegar enter
    
    if (comb == 'G') {
        printf("\n===== GASOLINA =====");
        printf("\n DIGITE A QUANTIDADE DE LITROS: ");
        scanf("%f", &litro);

        total = litro * 5.49;

        if (litro > 20) {
            desc = total * 0.06;
        } else {
            desc = total * 0.04;
        }

        totalt = total - desc;
        printf("\n O TOTAL DO DESCONTO FOI: R$ %.2f", desc);
        printf("\n O TOTAL COM O DESCONTO FOI: R$ %.2f\n", totalt);

        system("pause");

    } else if (comb == 'A') {
        printf("\n===== ÁLCOOL =====");
        printf("\n DIGITE A QUANTIDADE DE LITROS: ");
        scanf("%f", &litro);

        total = litro * 3.49;

        if (litro > 20) {
            desc = total * 0.05;
        } else {
            desc = total * 0.03;
        }

        totalt = total - desc;
        printf("\n O TOTAL DO DESCONTO FOI: R$ %.2f", desc);
        printf("\n O TOTAL COM O DESCONTO FOI: R$ %.2f\n", totalt);

        system("pause");
    } else {
        printf("\n OPÇÃO INVÁLIDA!\n");
    }
}

