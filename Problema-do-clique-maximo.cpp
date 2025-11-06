#include <stdio.h>
#include <locale.h>

#define MAX 20

int n; // número de vértices
int grafo[MAX][MAX];
int melhorClique[MAX];
int cliqueAtual[MAX];
int tamanhoMelhor = 0;

// Verifica se o vértice pode ser adicionado ao clique atual
int podeAdicionar(int v, int tamanhoAtual) {
    for (int i = 0; i < tamanhoAtual; i++) {
        int u = cliqueAtual[i];
        if (grafo[u][v] == 0) // se não há aresta, não é clique
            return 0;
    }
    return 1;
}

// Backtracking para encontrar o clique máximo
void buscaClique(int inicio, int tamanhoAtual) {
    if (tamanhoAtual > tamanhoMelhor) {
        tamanhoMelhor = tamanhoAtual;
        for (int i = 0; i < tamanhoAtual; i++)
            melhorClique[i] = cliqueAtual[i];
    }

    for (int v = inicio; v < n; v++) {
        if (podeAdicionar(v, tamanhoAtual)) {
            cliqueAtual[tamanhoAtual] = v;
            buscaClique(v + 1, tamanhoAtual + 1);
        }
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("Digite o número de vértices (máx %d): ", MAX);
    scanf("%d", &n);

    printf("Digite a matriz de adjacência (%d x %d):\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &grafo[i][j]);
        }
    }

    buscaClique(0, 0);

    printf("\nMaior clique encontrado (tamanho %d): ", tamanhoMelhor);
    for (int i = 0; i < tamanhoMelhor; i++)
        printf("%d ", melhorClique[i]);
    printf("\n");

    return 0;
}
