#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int matriz[2][3];
    int i, j;
    int n100, n140, n400;
    char opc;

    do
    {
        n100 = 0;
        n140 = 0;
        n400 = 0;

        printf("\n--- Preenchendo a matriz ---\n");

        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("Coloque o valor da matriz[%d][%d]: ", i, j);
                scanf("%d", &matriz[i][j]);

                if (matriz[i][j] < 100)
                    n100++;
                else if (matriz[i][j] <= 400)
                    n140++;
                else
                    n400++;
            }
        }

        printf("\n--- Resultados ---\n");
        printf("Números menores que 100: %d\n", n100);
        printf("Números entre 100 e 400: %d\n", n140);
        printf("Números maiores que 400: %d\n", n400);

        do
        {
            printf("\nDeseja informar outros valores? (S - N): ");
            scanf(" %c", &opc);

            if (opc == 's' || opc == 'S')
                printf("\nUma nova matriz será gerada...\n");
            else if (opc == 'n' || opc == 'N')
                printf("\n\nSaindo do sistema...\n");
            else
                printf("\nValor inválido! Use apenas S ou N.\n");

        } while (opc != 's' && opc != 'S' && opc != 'n' && opc != 'N');

    } while (opc == 's' || opc == 'S');

    return 0;
}
