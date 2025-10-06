#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int m[2][2];
    int i, j;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            do {
                printf("Insira um valor entre 0 e 10\n");
                printf("M[%d][%d]: ", i, j);
                scanf("%d", &m[i][j]);

                if (m[i][j] < 0 || m[i][j] > 10) {
                    printf("Esse número não pertence ao intervalo! Insira novamente.\n");
                }

            } while (m[i][j] < 0 || m[i][j] > 10);
        }
    }

    printf("\nMatriz preenchida:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%4d ", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}
