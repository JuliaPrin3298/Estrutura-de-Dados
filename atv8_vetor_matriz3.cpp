#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");

    int i, j;
    int matriz[4][4];
    int maior = 0;
    int maiorl = 0;
    int maiorc = 0;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Informe o valor da matriz[%d][%d]", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (matriz[i][j] > maior)
            {
                maior = matriz[i][j];
                maiorl = i;
                maiorc = j;
            }
        }
    }

    printf("O maior valor é %d, presente na matriz[%d][%d]",maior, maiorl,maiorc );
}