#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int lerEscolha() {
    int escolha;
    printf("\n=== Pedra, Papel ou Tesoura ===");
    printf("\n1 - Pedra");
    printf("\n2 - Papel");
    printf("\n3 - Tesoura");
    printf("\nEscolha sua opção: ");
    scanf("%d", &escolha);
    return escolha;
}

int jogadaComputador() {
    srand(time(NULL)); // inicializa o gerador aleatório
    return rand() % 3 + 1; // número entre 1 e 3
}

void verificarResultado(int jogador, int computador) {
    char *opcoes[] = {"", "Pedra", "Papel", "Tesoura"};
    printf("\nVocê escolheu: %s", opcoes[jogador]);
    printf("\nComputador escolheu: %s\n", opcoes[computador]);

    if (jogador == computador) {
        printf("\nEmpate!");
    } else if ((jogador == 1 && computador == 3) ||
               (jogador == 2 && computador == 1) ||
               (jogador == 3 && computador == 2)) {
        printf("\nVocê venceu!");
    } else {
        printf("\nComputador venceu!");
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int jogador = lerEscolha();
    int computador = jogadaComputador();
    verificarResultado(jogador, computador);

    return 0;
}
