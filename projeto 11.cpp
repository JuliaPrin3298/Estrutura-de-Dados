#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");
    const int tamanho = 5;
    int i, j, repetido, contador;
    int a[tamanho];

    repetido = 0;

    printf("Vetor A");
    printf("\n");

        for (contador = 1; contador <= tamanho; contador++)
        {
            printf("\n Escreva o %d° número do vetor: ", contador);
            scanf("%d", &a[i]);
            j = 0;

            do
            {
                if (i != j && a[i] == a[j])
                {
                    repetido = 1;
                    break;
                }
                j++;

            } while (j < tamanho);

            if (repetido == 1)
            {
                break;
            }
            i++;
        }
        while (i < tamanho)
            ;

        if (repetido == 1)
        {
            printf("Número repetido, escreva novamente ");
        }
        else
        {
            printf("Não tem numero repetido");
        }

        return 0;
    
}