#include<stdio.h>;
#include<locale.h>;


int main(){

    setlocale(LC_ALL, "Portuguese");

    int cont;
    float notas[4], media = 0;

    for (cont = 0; cont < 4; cont ++)
    {
        printf("\n Insira a %d° nota: ",cont + 1);
       scanf("%f", &notas[cont]);
       media += notas[cont];
        }

        notas[4] = media / 4;

        printf("\nNotas digitadas:\n");
    for (cont = 0; cont < 4; cont++) {
        printf("Nota %d: %.2f\n", cont + 1, notas[cont]);
    }

    printf("\nA média é: %.2f\n", notas[4]);

    

}