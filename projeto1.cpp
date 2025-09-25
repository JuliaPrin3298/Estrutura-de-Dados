#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");

    int a[10], b[10], i, j, repetido;
    int temp;

    printf("Vetor A\n");

    for (i = 0; i < 10; i++)
    {
        do
        {
            repetido = 0;

            printf("Insira o %dº valor: ", i + 1);
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
        } while (repetido == 1); // repete se o valor já existir
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

    //Vetor B
    printf("\n Vetor B");

    for(i = 0; i < 10; i++){

        do
        {
            printf("\n Digite o %d° valor: ", i + 1);
            scanf("%d", &b[i]);

            repetido = 0;

            for(j = 0; j < i; j++){
                if(b[i] == b[j]){
                    repetido = 1 ;
                    printf("\n Coloque um valor diferente! Não repita valores.\n");
                    break;
                }
            }

        }while (repetido == 1);

    }

    printf("\nValores no vetor B: ");
    for(i = 0; i < 10; i++) {
        printf("\n B[%d] = %d ", i, b[i]);
    }

    //Ordem decrescente 
    for(j = 0; j<10 -1; j++){
        for(i = 0; i < 10 -j -1; i++){
            if(b[i] < b[i+1]){
                temp = b[i];
                b[i] = b[i+1];
                b[i+1] = temp;
            }
        }
    }

    printf("\n Em ordem Decrescente: ");
    for(i = 0; i <10; i++){
        printf("\n %d", b[i]);
    }

    return 0;
}

/*

    

*/