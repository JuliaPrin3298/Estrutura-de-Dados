#include <stdio.h>
#include <locale.h>

int main() {
    
    setlocale(LC_ALL, "Portuguese");

    int matriz[4][4];
    int maiorLinha[4];
    int menorColuna[4];
    int i, j;

    printf("Digite os números da matriz 4x4:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < 4; i++) {
        maiorLinha[i] = matriz[i][0]; 
        for(j = 1; j < 4; j++) {
            if(matriz[i][j] > maiorLinha[i]) {
                maiorLinha[i] = matriz[i][j];
            }
        }
    }

    for(j = 0; j < 4; j++) {
        menorColuna[j] = matriz[0][j];
        for(i = 1; i < 4; i++) {
            if(matriz[i][j] < menorColuna[j]) {
                menorColuna[j] = matriz[i][j];
            }
        }
    }

    printf("\nMaiores números de cada linha:\n");
    for(i = 0; i < 4; i++) {
        printf("%d ", maiorLinha[i]);
    }

    printf("\nMenores números de cada coluna:\n");
    for(j = 0; j < 4; j++) {
        printf("%d ", menorColuna[j]);
    }

    printf("\n");

}
