#include <stdio.h>
#include <locale.h>

#define TAM 10

void lerVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o %d° elemento do vetor: ", i + 1);
        scanf("%d", &vetor[i]);
    }
}

void trocarMetade(int vetor[], int tamanho) {
    int temp;
    for (int i = 0; i < tamanho / 2; i++) {
        temp = vetor[i];
        vetor[i] = vetor[i + tamanho / 2];
        vetor[i + tamanho / 2] = temp;
    }
}

void mostrarVetor(int vetor[], int tamanho) {
    printf("\nVetor final:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int vetor[TAM];

    lerVetor(vetor, TAM);
    trocarMetade(vetor, TAM);
    mostrarVetor(vetor, TAM);

    return 0;
}
