#include <stdio.h>
#include <locale.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int mochila(int capacidade, int peso[], int valor[], int n) {
    int dp[n + 1][capacidade + 1];

    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= capacidade; w++) {
            if (i == 0 || w == 0)
                dp[i][w] = 0;
            else if (peso[i - 1] <= w)
                dp[i][w] = max(valor[i - 1] + dp[i - 1][w - peso[i - 1]], dp[i - 1][w]);
            else
                dp[i][w] = dp[i - 1][w];
        }
    }

    return dp[n][capacidade];
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n, capacidade;

    printf("Digite o número de itens: ");
    scanf("%d", &n);

    int peso[n], valor[n];

    for (int i = 0; i < n; i++) {
        printf("Item %d - Peso: ", i + 1);
        scanf("%d", &peso[i]);
        printf("Item %d - Valor: ", i + 1);
        scanf("%d", &valor[i]);
    }

    printf("Digite a capacidade da mochila: ");
    scanf("%d", &capacidade);

    int resultado = mochila(capacidade, peso, valor, n);

    printf("\nValor máximo que pode ser carregado: %d\n", resultado);

    return 0;
}
