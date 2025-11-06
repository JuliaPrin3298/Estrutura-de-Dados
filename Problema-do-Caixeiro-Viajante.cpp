#include <stdio.h>
#include <locale.h>

#define MAX 10
#define INF 999999

int n; // número de cidades
int grafo[MAX][MAX];
int visitado[MAX];
int menorCusto = INF;
int caminhoMelhor[MAX];
int caminhoAtual[MAX];

void tsp(int atual, int count, int custo) {
    if (count == n && grafo[atual][0] > 0) {
        // Fecha o ciclo voltando à cidade inicial (0)
        custo += grafo[atual][0];
        if (custo < menorCusto) {
            menorCusto = custo;
            for (int i = 0; i < n; i++)
                caminhoMelhor[i] = caminhoAtual[i];
        }
        return;
    }

    for (int i = 0; i < n; i++) {
        if (!visitado[i] && grafo[atual][i] > 0) {
            visitado[i] = 1;
            caminhoAtual[count] = i;
            tsp(i, count + 1, custo + grafo[atual][i]);
            visitado[i] = 0;
        }
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("Digite o número de cidades (máx %d): ", MAX);
    scanf("%d", &n);

    printf("Digite a matriz de distâncias (%d x %d):\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &grafo[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
        visitado[i] = 0;

    visitado[0] = 1; // começa pela cidade 0
    caminhoAtual[0] = 0;

    tsp(0, 1, 0);

    printf("\nMenor custo encontrado: %d\n", menorCusto);
    printf("Melhor caminho: ");
    for (int i = 0; i < n; i++)
        printf("%d -> ", caminhoMelhor[i]);
    printf("0\n");

    return 0;
}
