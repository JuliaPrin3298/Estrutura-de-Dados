#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float temp[7];
    float soma = 0, media, menor, maior;
    int i;

    printf("Digite as temperaturas:\n");

    for(i = 0; i < 7; i++) {
        do {
            printf("Dia %d: ", i+1);
            scanf("%f", &temp[i]);

            if(temp[i] < -95 || temp[i] > 65) {
                printf("Valor inválido! Digite entre -95 e 65.\n");
            }
        } while(temp[i] < -95 || temp[i] > 65);

        soma += temp[i];
    }

    menor = temp[0];
    maior = temp[0];

    for(i = 1; i < 7; i++) {
        if(temp[i] < menor){
            menor = temp[i];
        } 
        if(temp[i] > maior){
            maior = temp[i];
        } 
    }

    media = soma / 7;

    printf("\nDados Coletados:\n");
    printf("Menor temperatura: %.2f°C\n", menor);
    printf("Maior temperatura: %.2f°C\n", maior);
    printf("Temperatura média: %.2f°C\n", media);

    return 0;
}
