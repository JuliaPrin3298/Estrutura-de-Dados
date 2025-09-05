#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");

    float n1, n2, n3, n4, media;

    printf("\n=========================");
    printf("\n Média de Aluno");
    printf("\n Coloque a 1° Nota: ");
    scanf("%f", &n1);
    printf("\n Coloque a 2° Nota: ");
    scanf("%f", &n2);
    printf("\n Coloque a 3° Nota: ");
    scanf("%f", &n3);
    printf("\n Coloque a 4° Nota: ");
    scanf("%f", &n4);

    media = (n1 + n2 + n3 + n4) / 4;

    if (media >= 9.0) {
        printf("ALUNO APROVADO - NOTA A\n");
    } else if (media >= 7.5) {
        printf("ALUNO APROVADO - NOTA B\n");
    } else if (media >= 6.0) {
        printf("ALUNO APROVADO - NOTA C\n");
    } else if (media >= 4.0) {
        printf("ALUNO REPROVADO - NOTA D\n");
    } else {
        printf("ALUNO REPROVADO - NOTA E\n");
    }

    system("pause"); 
    return 0;
}

