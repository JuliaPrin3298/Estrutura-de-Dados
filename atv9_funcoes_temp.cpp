#include <stdio.h>
#include <locale.h>

void lerTemp(float *temp, char *tipo) {
    do {
        printf("Digite o tipo de temperatura (C - F): ");
        scanf(" %c", tipo);
    } while (*tipo != 'C' && *tipo != 'c' && *tipo != 'F' && *tipo != 'f');

    printf("Digite a temperatura: ");
    scanf("%f", temp);
}

void converteTemp(float temp, char tipo) {
    if (tipo == 'C' || tipo == 'c') {
        float f = (temp * 9.0 / 5.0) + 32;
        printf("A conversão de Celsius para Fahrenheit é: %.2f°F\n", f);
    } else {
        float c = (temp - 32) * 5.0 / 9.0;
        printf("A conversão de Fahrenheit para Celsius é: %.2f°C\n", c);
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    float temp;
    char tipo;

    lerTemp(&temp, &tipo);      
    converteTemp(temp, tipo);   


    return 0;
}
