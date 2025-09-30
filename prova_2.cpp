#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int linhas, colunas, min, max, i, j;
    int impares = 0, pares = 0, negativos = 0, positivos = 0;
    int matriz[10][10];

    printf("Digite o número de linhas: ");
    scanf("%d", &linhas);
    printf("Digite o número de colunas: ");
    scanf("%d", &colunas);

    printf("Digite o valor mínimo permitido: ");
    scanf("%d", &min);
    printf("Digite o valor máximo permitido: ");
    scanf("%d", &max);

    for(i = 0; i < linhas; i++) {
        for(j = 0; j < colunas; j++) {
            do {
                printf("Digite o valor para matriz[%d][%d]: ", i, j);
                scanf("%d", &matriz[i][j]);

                if(matriz[i][j] < min || matriz[i][j] > max) {
                    printf("Valor fora do intervalo (%d a %d)! Digite novamente.\n", min, max);
                }
            } while(matriz[i][j] < min || matriz[i][j] > max);

            if(matriz[i][j] % 2 == 0) {
                pares++;
            } else {
                impares++;
            }

            if(matriz[i][j] < 0) {
                negativos++;
            } else if(matriz[i][j] > 0) {
                positivos++;
            }
        }
    }

    printf("\nDados Coletados:\n");
    printf("Números pares: %d\n", pares);
    printf("Números ímpares: %d\n", impares);
    printf("Números negativos: %d\n", negativos);
    printf("Números positivos: %d\n", positivos);

    return 0;
}
