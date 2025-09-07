#include <stdio.h>;
#include <locale.h>;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int A[5], B[5];
    double C[5];           
    int cont, operacao;

    printf("Escolha a operação:\n");
    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    printf("Opção: ");
    scanf("%d", &operacao);

    printf("\nDigite os 5 valores do vetor A:\n");
    for (cont = 0; cont < 5; cont++) {
        printf("A[%d]: ", cont + 1);
        scanf("%d", &A[cont]);
    }

    printf("\nDigite os 5 valores do vetor B:\n");
    for (cont = 0; cont < 5; cont++) {
        printf("B[%d]: ", cont + 1);
        scanf("%d", &B[cont]);
    }

    for (cont = 0; cont < 5; cont++) {
        switch (operacao) {
            case 1: C[cont] = (double)A[cont] + (double)B[cont]; break;
            case 2: C[cont] = (double)A[cont] - (double)B[cont]; break;
            case 3: C[cont] = (double)A[cont] * (double)B[cont]; break;
            case 4:
                if (B[cont] != 0) C[cont] = (double)A[cont] / (double)B[cont];
                else { printf("Divisão por zero em posição %d. Definido como 0.\n", cont + 1); C[cont] = 0.0; }
                break;
            default:
                printf("Opção inválida!\n");
                return 1;
        }
    }

    printf("\nResultado (Vetor C):\n");
    for (cont = 0; cont < 5; cont++) {
        if (operacao == 1)
            printf("A[%d] + B[%d] = %d + %d = %.0f\n", cont + 1, cont + 1, A[cont], B[cont], C[cont]);
        else if (operacao == 2)
            printf("A[%d] - B[%d] = %d - %d = %.0f\n", cont + 1, cont + 1, A[cont], B[cont], C[cont]);
        else if (operacao == 3)
            printf("A[%d] * B[%d] = %d * %d = %.0f\n", cont + 1, cont + 1, A[cont], B[cont], C[cont]);
        else
            printf("A[%d] / B[%d] = %d / %d = %.2f\n", cont + 1, cont + 1, A[cont], B[cont], C[cont]);
    }

    return 0;
}
