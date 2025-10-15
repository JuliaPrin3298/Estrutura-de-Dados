#include <stdio.h>
#include <locale.h>

int lerPalpite() {
    int palp;
    printf("Digite o palpite: ");
    scanf("%d", &palp);
    return palp;
}

void verificaNumero(int numero) {
    int palpite;
    do {
        palpite = lerPalpite();
        if (palpite == numero) {
            printf("Acertou o número!!!\n");
        } else if (palpite < numero) {
            printf("O número é maior que seu palpite!\n");
        } else {
            printf("O número é menor que seu palpite!\n");
        }
    } while (palpite != numero);
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numero = -8; 
    printf("=== Jogo de Adivinhação ===\n");
    verificaNumero(numero);

    return 0;
}
