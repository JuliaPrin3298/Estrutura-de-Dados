#include<stdio.h>;
#include<locale.h>;

int main(){
    
    setlocale(LC_ALL, "Portuguese");

    int x;
    float numeros[7];

    //for para alimentar as posições do vetor
    for(x = 0; x < 7; x ++){
        printf("\n Informe o %d número: ", x + 1);
        scanf("%f", &numeros[x]);
    }

    printf("\n Exibindo os números armazenos: \n");

    // for para ler as posições do vetor

    for(x = 0; x < 7; x ++){
        printf("\n %d = %.0f", x + 1, numeros[x]);
    }
    return 0;

}