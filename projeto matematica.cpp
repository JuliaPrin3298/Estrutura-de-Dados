#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");

    int a[10], b[10], c[10], d[10], f[10], h[20], i, j, repetido;
    int k = 0;
    int e = 0;
    int g = 0;
    int m = 0;
    int temp;

    printf("Vetor A\n");

    for (i = 0; i < 10; i++)
    {
        do
        {
            repetido = 0;

            printf("Insira o %d° valor: ", i + 1);
            scanf("%d", &a[i]);

            // verifica o que foi digitado antes
            for (j = 0; j < i; j++)
            {
                if (a[i] == a[j])
                {
                    repetido = 1;
                    printf("Coloque um valor diferente! Não repita valores.\n");
                    break;
                }
            }
        } while (repetido == 1); // repete se o valor j existir
    }

    // mostra os valores
    printf("\nValores no vetor A: ");
    for (i = 0; i < 10; i++)
    {
        printf("\n A[%d] = %d ", i, a[i]);
    }
    printf("\n");

    // Ordem decrescente
    for (j = 0; j < 10 - 1; j++)
    {
        for (i = 0; i < 10 - j - 1; i++)
        {
            if (a[i] < a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }

    printf("Em ordem decrescente: ");
    for (i = 0; i < 10; i++)
    {
        printf("\n %d ", a[i]);
    }

     // Ordem Crescente =
    for (j = 0; j < 10 - 1; j++)
    {
        for (i = 0; i < 10 - j - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }

    printf("\nEm ordem Crescente: ");
    for (i = 0; i < 10; i++){
        printf("\n %d ", a[i]);
    }

    // Vetor B
    printf("\n Vetor B");

    for (i = 0; i < 10; i++)
    {

        do
        {
            printf("\n Digite o %d° valor: ", i + 1);
            scanf("%d", &b[i]);

            repetido = 0;

            for (j = 0; j < i; j++)
            {
                if (b[i] == b[j])
                {
                    repetido = 1;
                    printf("\n Coloque um valor diferente! Não repita valores.\n");
                    break;
                }
            }

        } while (repetido == 1);
    }

    printf("\nValores no vetor B: ");
    for (i = 0; i < 10; i++)
    {
        printf("\n B[%d] = %d ", i, b[i]);
    }

    // Ordem decrescente
    for (j = 0; j < 10 - 1; j++)
    {
        for (i = 0; i < 10 - j - 1; i++)
        {
            if (b[i] < b[i + 1])
            {
                temp = b[i];
                b[i] = b[i + 1];
                b[i + 1] = temp;
            }
        }
    }

    printf("\n Em ordem Decrescente: ");
    for (i = 0; i < 10; i++)
    {
        printf("\n %d", b[i]);
    }
    printf("\n");

     // Ordem Crescente 
    for (j = 0; j < 10 - 1; j++)
    {
        for (i = 0; i < 10 - j - 1; i++)
        {
            if (b[i] > b[i + 1])
            {
                int temp = b[i];
                b[i] = b[i + 1];
                b[i + 1] = temp;
            }
        }
    }
    printf("\n");

    printf("\nEm ordem Crescente: ");
    for (i = 0; i < 10; i++)
    {
        printf("\n %d", b[i]);
    }

   

   

    // INTERSECÇÃO
    printf("\n");
    printf("\nVetor C - Intersecção Elementos que aparecem em A e em B.\n");

    i = 0;
    j = 0;

    while (i < 10 && j < 10)
    {
        if (a[i] == b[j])
        {
            c[k] = a[i];
            k++;
            i++;
            j++;
        }
        else if (a[i] < b[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    if (k == 0)
    {
        printf("\nNão tem intersecção entre A e B.\n");
    }
    else
    {
        printf("\nTem intersecção:\n");
        for (int x = 0; x < k; x++)
        {
            printf("%d ", c[x]);
        }
    }
    // elementos que estão em A mas não em B

    printf("\n");
    printf("\nVetor D - Elementos que estão em A não em B.\n");

    e = 0;
    i = 0;
    j = 0;

    while (i < 10 && j < 10)
    {
        if (a[i] == b[j])
        {
            j++;
            i++;
        }
        else if (a[i] < b[j])
        {
            d[e] = a[i];
            e++;
            i++;
        }
        else
        {
            j++;
        }
    }
    while (i < 10)
    {
        d[e] = a[i];
        e++;
        i++;
    }
    if (e == 0)
    {
        printf("\nA \\ B vazio, nenhum elemento exclusivo de A.\n");
    }
    else
    {
        printf("\nA \\ B: ");
        for (int x = 0; x < e; x++)
        {
            printf("%d ", d[x]);
        }
        printf("\n");

        /// Elementos que estão em B mas não em A///

        printf("\n");
        printf("\nVetor F - Elementos que estão em B não em A.\n");

        i = 0;
        j = 0;
        g = 0;

        while (i < 10 && j < 10)
        {
            if (a[i] == b[j])
            {

                i++;
                j++;
            }
            else if (b[j] < a[i])
            {
                f[g] = b[j];
                g++;
                j++;
            }
            else
            {
                i++;
            }
        }
        while (j < 10)
        {
            f[g] = b[j];
            g++;
            j++;
        }
        if (g == 0)
        {
            printf("\nB \\ A vazio, nenhum exclusivo de B.\n");
        }
        else
        {
            printf("\nB \\ A: ");
            for (int x = 0; x < g; x++)
            {
                printf("%d ", f[x]);
            }
            printf("\n");

            /// Diferença Simétrica - elementos que estão em A ou B///

            printf("\n");
            printf("\nVetor H - Diferença simétrica - A ou B, mas não nos dois.\n");
            m = 0;

            /// Elementos de A///
            for (i = 0; i < 10; i++)
            {
                int encontrado = 0;
                for (j = 0; j < 10; j++)
                {
                    if (a[i] == b[j])
                    {
                        encontrado = 1;
                        break;
                    }
                }
                if (encontrado == 0)
                {
                    h[m] = a[i];
                    m++;
                }
            }

            /// Elementos de B///
            for (j = 0; j < 10; j++)
            {
                int encontrado = 0;
                for (i = 0; i < 10; i++)
                {
                    if (b[j] == a[i])
                    {
                        encontrado = 1;
                        break;
                    }
                }
                if (encontrado == 0)
                {
                    h[m] = b[j];
                    m++;
                }
            }
            printf("\nA delta B: ");
            for (i = 0; i < m; i++)
            {
                printf("%d ", h[i]);
            }
            return 0;
        }
    }
}

/*



*/
