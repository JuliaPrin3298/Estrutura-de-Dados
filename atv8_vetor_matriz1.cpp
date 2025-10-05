#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int vetorA[6];
    int soma, i;

    vetorA[0]= 1;
    vetorA[1] = 0;
    vetorA[2] = 5;
    vetorA[3] = -2;
    vetorA[4]= -5;
    vetorA[5] = 7;

    soma = vetorA[0] + vetorA[1] + vetorA[5];

    vetorA[4] = 100;

    for (i = 0; i < 6; i++)
    {
        printf("\n Vetor A[%d] = %d \n", i, vetorA[i]);
        
    }
    printf("\n Valor da Soma = %d", soma);
}

