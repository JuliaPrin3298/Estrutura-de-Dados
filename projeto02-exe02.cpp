#include <stdio.h>
#include <stdlib.h>

void main(){

    int i=0,j=0, matriz[2][2],matriz_inversa[2][2], diagonal_principal[2][2], temp;

    for (i = 0; i <2; i++)
    {
        for (j = 0; j <2; j++)
        {
            printf("Digite um valor para o endereco [%d][%d] da matriz: ", i,j);
            scanf("%d", &matriz[i][j]);
        }
        
    }

    for (i = 0; i <1; i++)
    {
        temp = matriz[i][i]; //1
        printf("\ntemp: %d", temp);
        diagonal_principal[i][i] = matriz[i+1][i+1]; //4
        printf("\ndiagonal principal: %d", diagonal_principal[i][i]);
        diagonal_principal[i+1][i+1] = temp;
        printf("\ndiagonal principal: %d", diagonal_principal[i+1][i+1]);
        
        matriz_inversa[i][i] = diagonal_principal[i][i];
        matriz_inversa[i+1][i+1] = diagonal_principal[i+1][i+1];
        matriz_inversa[i][i+1] = -matriz[i][i+1];
        matriz_inversa[i+1][i] = -matriz[i+1][i];

    }

    /*printf("\n===================\n");
    
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("\ndiagonal [%d][%d] : %d", i,j, diagonal_principal[i][j]);
        }
        printf("\n");
        
    }*/

    printf("\n===================\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("\nMatriz [%d][%d] : %d", i,j, matriz[i][j]);
        }
        printf("\n");
        
    }

    printf("\n===================\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("\nMatriz inversa [%d][%d] : %d", i,j, matriz_inversa[i][j]);
        }
        printf("\n");
        
    }
    

}