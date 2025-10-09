#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");

    int i, j, linhaA, colunaA;

    printf("Insira o valor de linhas da Matriz A: ");
    scanf("%d", &linhaA);

    printf("Insira o valor de colunas da Matriz A: ");
    scanf("%d", &colunaA);

		int a[linhaA][colunaA];	
		
    if (linhaA <= 10)
    {
        

        printf("Insira os valores da Matriz A");
        for (i = 0; i < linhaA; i++)
        {
            for (j = 0; j < colunaA; j++)
            {
                printf("\n A[%d][%d]: ", i, j);
                scanf("%d", &a[i][j]);
            }
        }
    }
    else
    {
        printf("ERRO");
    }

    printf("=================================== \n");

    int linhaB, colunaB;

    printf("Insira o valor de linhas da Matriz B: ");
    scanf("%d", &linhaB);

    printf("Insira o valor de colunas da Matriz B: ");
    scanf("%d", &colunaB);

	int b[linhaB][colunaB];
	
    if (linhaB <= 10)
    {
    	
        printf("Insira os valores da Matriz B");
        for (i = 0; i < linhaB; i++)
        {
            for (j = 0; j < colunaB; j++)
            {
                printf("\n B[%d][%d]: ", i, j);
                scanf("%d", &b[i][j]);
            }
        }
    }
    else
    {
        printf("ERRO");
    }

    if (colunaA == linhaB)
    {
        int c[linhaA][colunaB] = {0};
        int k;
        printf("A multiplicação entre A e B é :\n");
        for (i = 0; i < linhaA; i++)
        {
            for (j = 0; j < colunaB; j++)
            {
                for (k = 0; k < colunaA; k++)
                {
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        for (i = 0; i < linhaA; i++)
        {
            for (j = 0; j < colunaB; j++)
            {
                printf("\n C[%d][%d]: %d ", i, j, c[i][j]);
            }
        }
    }
    else
    { 
        printf("Essas matrizes não são multiplicaveis\n");
    }
    
    
     printf("=================================== \n");
     
     //Matriz inversa
     
     
}


