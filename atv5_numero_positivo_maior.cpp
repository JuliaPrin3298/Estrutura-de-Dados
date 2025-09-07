#include <stdio.h>;
#include <locale.h>;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int cont, numeros[5], maior;

    do {
        printf("\nColoque o 1° número: ");
        scanf("%d", &numeros[0]);
        if (numeros[0] < 0) {
            printf("\nO número inserido não é positivo.\n");
        }
    } while (numeros[0] < 0);

    maior = numeros[0];

    for (cont = 1; cont < 5; cont++) {
        do {
            printf("\nColoque o %d° número: ", cont + 1);
            scanf("%d", &numeros[cont]);
            if (numeros[cont] < 0) {
                printf("\nO número inserido não é positivo.\n");
            }
        } while (numeros[cont] < 0);


        if (numeros[cont] > maior) {
            maior = numeros[cont];
        }
    }

    printf("\nO maior número registrado é: %d\n", maior);

    return 0;
}
