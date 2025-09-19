#include<stdio.h>
#include<locale.h>

main(){

    setlocale(LC_ALL, "Portuguese");

    int linha,coluna, matriz[3][3];

    for(linha = 0; linha <= 2; linha++){
        for(coluna = 0; coluna <= 2; coluna++){
            printf("informe o valor da posiçao[%d][%d]: ", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);
        }
        printf("\n");
    }

    printf("Exibindo todos os valores:\n");
    for(linha = 0; linha <= 2; linha++){
        for(coluna = 0; coluna <= 2; coluna++){
            printf(" %d ", matriz[linha][coluna]);           
        }
        printf("\n");
    }

   
    printf("Exibindo apenas os números pares:\n");
    for(linha = 0;linha<= 2; linha++){
        for(coluna = 0; coluna <= 2; coluna++){
            if(matriz[linha][coluna] % 2 == 0){
                printf("%d", matriz[linha][coluna]);
            }
        }
        printf("\n");
    }

    printf("Exibe apenas os números ímpares: \n");
    for(linha = 0; linha <= 2; linha ++){
        for(coluna = 0; coluna <= 2; coluna++){
            if(matriz[linha][coluna] % 2 == 1){
                printf("%d", matriz[linha][coluna]);
            }
        }
        printf("\n");
    }

}