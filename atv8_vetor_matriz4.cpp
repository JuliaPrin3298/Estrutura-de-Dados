#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");

    int i, j;
    int c, l;

    printf("Insira o numero de linhas: ");
    scanf("%d", &l);
    printf("Insira o numero de colunas: ");
    scanf("%d", &c);

    int a[l][c];

    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Informe o valor da matriz a[%d][%d]", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n--- Matriz A ---\n");
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    int b[l][c];

    printf("\n--- Matriz B ---\n");
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            b[i][j] = pow(a[i][j], 2);
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
}