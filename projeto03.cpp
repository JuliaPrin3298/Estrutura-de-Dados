/*
Julia Rocha Nogueira
Maiara Macedo Ribeiro de Sousa
*/

#include <stdio.h>
#include <locale.h>
#define TAM 10

//valor repetido
int inserirValor(int a[],int tamanho){
    int i;
    for (i = 0; i < tamanho; i++)
    {
            printf("\nInsira o %d° valor: ", i + 1);
            scanf("%d", &a[i]);
    }
}


//valor não repetido
int inserirVNR(int a[], int tamanho){

    int i, j, repetido;

    for (i = 0; i < tamanho; i++)
    {
        do
        {
            repetido = 0;

            printf("\nInsira o %d° valor: ", i + 1);
            scanf("%d", &a[i]);

            for (j = 0; j < i; j++)
            {
                if (a[i] == a[j])
                {
                    repetido = 1;
                    printf("\nColoque um valor diferente! Não repita valores.\n");
                    break;
                }
            }
        } while (repetido == 1);
    }

}

void mostrarVetor(int a[], int tamanho){

    int i;

     for (i = 0; i < tamanho; i++)
    {
        printf("\n A[%d] = %d ", i, a[i]);
    }
    printf("\n");

}


int decrescente(int a[], int tamanho){

    int i, j, temp;

     for (j = 0; j < tamanho - 1; j++)
    {
        for (i = 0; i < 9 - j; i++)
        {
            if (a[i] < a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }

    printf("\n Em ordem decrescente: ");
    for (i = 0; i < tamanho; i++)
    {
        printf("\n %d ", a[i]);
    }

}

int crescente(int a[], int tamanho){

    int i, j, temp;

    for (j = 0; j < tamanho - 1; j++)
    {
        for (i = 0; i < 9 - j; i++)
        {
            if (a[i] > a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }

    printf("\nEm ordem Crescente: ");
    for (i = 0; i < tamanho; i++)
    {
        printf("\n %d ", a[i]);
    }
}

int main()
{

    setlocale(LC_ALL, "Portuguese");

    int a[TAM];

    //valors repetidos
    printf("Insira qualquer valor no vetor eles podem se repetir\n");
    inserirValor(a, TAM);

    //valores não repetidos
    printf("\nVetor A\n");
    inserirVNR(a, TAM);

    printf("\nValores no vetor A:\n ");
    mostrarVetor(a, TAM);
    decrescente(a, TAM);
    crescente(a, TAM);
}
