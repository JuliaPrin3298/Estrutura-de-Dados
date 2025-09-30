#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int bina[8];
    int decimal = 0;
    int i;

    printf("Digite um número binário de 8 dígitos (um por vez):\n");
    for(i = 0; i < 8; i++) {
        scanf("%d", &bina[i]);
        while(bina[i] != 0 && bina[i] != 1) {
            printf("Valor inválido! Digite 0 ou 1: ");
            scanf("%d", &bina[i]);
        }
    }

    /*
       Fórmula: 
       Decimal = b0*2^7 + b1*2^6 + b2*2^5 + b3*2^4 + 
                 b4*2^3 + b5*2^2 + b6*2^1 + b7*2^0
    */

    if(bina[0] == 1) decimal += 128; // 2^7
    if(bina[1] == 1) decimal += 64;  // 2^6
    if(bina[2] == 1) decimal += 32;  // 2^5
    if(bina[3] == 1) decimal += 16;  // 2^4
    if(bina[4] == 1) decimal += 8;   // 2^3
    if(bina[5] == 1) decimal += 4;   // 2^2
    if(bina[6] == 1) decimal += 2;   // 2^1
    if(bina[7] == 1) decimal += 1;   // 2^0

    printf("Valor decimal: %d\n", decimal);
}
