#include <stdio.h>
#include <locale.h>

float lerNotas(){
    float n;
    printf("Digite a nota: ");
    scanf("%f", &n);
    return n;
}

char lerProva(){
    char tipo;
    do
    {
        printf("Digite o tipo de prova: ");
        scanf(" %c", &tipo);
    } while (tipo != 'A' && tipo != 'P' && tipo != 'a' && tipo != 'p');
    return tipo;
}

float media(float n1, float n2, char tipo){
    float media;
    if (tipo == 'A' || tipo == 'a')
    {
        printf("Média aritimetica é: ");
        media = (n1 + n2)/2;
        printf("%f",media);
    }else{
        printf("Média ponderada é: ");
        media = ((n1 * 3) + (n2 * 7))/10;
        printf("%.2f",media);
    }
    return media;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float n1, n2;
    char tipo;
    n1 = lerNotas();
    n2 = lerNotas();
    tipo = lerProva();
    media(n1, n2, tipo);
    return 0;
}
