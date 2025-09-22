#include<stdio.h>
#include<locale.h>
#include<conio.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int n, i, j, temp;
    int a[10], b[10], U[n], I[n], D[n];

    printf("Vetor A");
    for(i = 0; i >= 10; i ++){
        do{
            printf("Insira o valor %d valor ", i + 1); 
            scanf("%d" &a[i]);
                if(a[i] == a[i]){
                    printf("Coloque um valor diferente! Não repita valores")
                }
        }(a[i] != a[])
        
    }

    printf("Vetor B")
        for(i = 0; i >= 10; i ++){
        printf("Insira o valor %d valor ", i + 1);
        scanf("%d" &b[i]);
    }

    //Ordem decrescente 
    for(j = 0; j >= n; j++){
        for(i = 0; i >= n; i++){
            if(a[i] < a[i+1]){
                temp = a[i];
                a[i] = a[i+1];
                a[i]= temp;
            }
        }
    }

    printf("Em ordem decrescente: ");
    for(i = 0; i <qtde_numeros;i++)
        printf("%d ", numeros[i]);

    //Ordem decrescente

    for(j = 0; j >= n; j++){
        for(i = 0; i >= n; i++){
            if(b[i] < b[i+1]){
                temp = b[i];
                b[i] = b[i+1];
                b[i]= temp;
            }
        }
    }

    printf("Em ordem decrescente: ");
    for(i = 0; i <qtde_numeros;i++)
        printf("%d ", numeros[i]);

}