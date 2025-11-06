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
    return 0;
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
    return 0;

}
//Remover valor repetido
int removerRepetidos(int a[], int tamanho, int r[]){

int i, j;
int k =0;

for (i = 0; i < tamanho; i++) {
    int repetido =0;

    for (j=0; j<k; j++){
        if (r[j] == a[i]){
            repetido =1;
            break;
        }
    }
    if (repetido == 0){
        r[k] = a[i];
        k = k + 1;
    }
}
return k;
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
    return 0;

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
    return 0;
}

//União

int uniao(int a[], int b[], int r[], int tamanho){
    int i, j;
    int k =0;

    for (i = 0; i < tamanho; i++){
        int jaExiste = 0;

        for (j =0; j < k; j++){
            if (r[j] == a[i]){
                jaExiste = 1;
                break;
            }
        }
        if (jaExiste == 0){
            r[k] = a[i];
            k = k +1;
        }
    }
    for (i = 0; i < tamanho; i++){
        int jaExiste = 0;

        for (j = 0; j< k; j++){
            if (r[j] == b[i]){
                jaExiste =1;
                break;
            }
        }
        if (jaExiste == 0){
            r[k] = b[i];
            k = k +1;
        }
    }
    return k;
}

//Intersecção

int interseccao(int a[], int b[], int r[], int tamanho){
    int i, j;
    int k =0;

    for (i = 0; i < tamanho; i++){

        int apareceEmB = 0;
        for (j =0; j< tamanho; j++){
            if (a[i] == b[j]){
                apareceEmB = 1;
                break;
            }
        }
        if (apareceEmB == 1){
            int repetido = 0;
            for (j = 0; j <k; j++){
                if (r[j] == a[i]){
                    repetido = 1;
                    break;
                }
            }
            if (repetido == 0){
                r[k] = a[i];
                k = k +1;
            }
        }
    }
    return k;
}

//Diferença

int diferenca(int a[], int b[], int r[], int tamanho){
    int i, j;
    int k = 0;

    for (i = 0; i < tamanho; i ++){
        int existeEmB = 0;
        for(j = 0; j < tamanho; j++){
            if (a[i] == b[j]){
                existeEmB = 1;
                break;
            }
        }
        if (existeEmB == 0){
            int repetido = 0;
            for (j = 0; j < k; j++){
                if (r[j] == a[i]) {
                    repetido = 1;
                    break;
                }
            }

            if(repetido == 0){
                r[k] = a[i];
                k = k +1;
            }
        }
    }
    return k;
}

//Diferença Simétrica

int diferencaSimetrica(int a[], int b[], int r[], int tamanho){
    int U[2 * TAM]; //U(união)
    int I[TAM]; //I(intersecção)
    int tamU, tamI;

    int i, j, k = 0;

    tamU = uniao(a, b, U, tamanho);

    tamI = interseccao(a, b, I, tamanho);

    for (i = 0; i < tamU; i++){
        int temNaInter = 0;

        for (j = 0; j < tamI; j++){
            if (U[i] == I[j]){
                temNaInter = 1;
                break;
            }
        }
        if (temNaInter == 0){
            int repetido = 0;
            for(j = 0; j < k; j++){
                if (r[j]== U[i]){
                    repetido =1;
                    break;
                }
            }
            if (!repetido){
                r[k] = U[i];
                k ++;
            }
        }
    }
    return k;
}

int main()
{

    setlocale(LC_ALL, "Portuguese");

    int a[TAM], b[TAM],
        r[2 * TAM], tamR;


    //valores repetidos
    printf("Insira qualquer valor no vetor eles podem se repetir\n");
    inserirValor(a, TAM);

    //valores não repetidos
    printf("\nVetor A\n");
    inserirVNR(a, TAM);

    printf("\nValores no vetor A:\n ");
    mostrarVetor(a, TAM);
    decrescente(a, TAM);
    crescente(a, TAM);

    //Vetor B

    printf("\nInsira qualquer valor no vetor eles podem se repetir\n");
    inserirValor(b, TAM);

    printf("\nVetor B\n");
    inserirVNR(b, TAM);

    printf("\nValores no vetor B:\n ");
    mostrarVetor(b, TAM);
    decrescente(b, TAM);
    crescente(b, TAM);

    //Retirar valores repetidos
    tamR= removerRepetidos(a, TAM,r);
    printf("\nVetor A sem repetidos:\n");
    for (int i=0; i <tamR; i++){
        printf(" r[%d] = %d\n", i, r[i]);
    }

    //União
    tamR = uniao(a, b, r, TAM);
    printf("\nUniao (A U B):\n");
    for (int i=0; i < tamR; i++){
        printf(" r[%d] = %d\n", i, r[i]);
    }

    //Intersecção
    tamR = interseccao(a, b, r, TAM);
    printf("\nInterseccao: \n");
    for(int i =0; i < tamR; i++){
        printf(" r[%d] = %d\n", i, r[i]);
    }

    //Diferença A - B
    tamR = diferenca(a, b, r, TAM);
    printf("\nDiferenca (A - B): \n");
    for(int i = 0; i <tamR; i++){
        printf(" r[%d] = %d\n", i, r[i]);
    }

    //Diferença B - A
    tamR = diferenca(b, a, r, TAM);
    printf("\nDiferenca (B - A): \n");
    for(int i = 0; i < tamR; i++){
        printf(" r[%d] = %d\n", i, r[i]);
    }

    //Diferença Simétrica
    tamR = diferencaSimetrica(a, b, r, TAM);
    printf("\nDiferenca Simetrica: \n");
    for (int i=0; i< tamR; i++){
        printf(" r[%d] = %d\n", i, r[i]);
    }

    return 0;
}
