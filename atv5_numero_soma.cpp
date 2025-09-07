#include<stdio.h>;
#include<locale.h>;

int main(){

    setlocale(LC_ALL, "Portuguese");

    int cont, numeros[5], soma = 0;

    for (cont = 0; cont < 5; cont++)
    {
        printf("\n Coloque o %d° número: ", cont + 1);
        scanf("%d", &numeros[cont]);
        soma += numeros[cont];
    }

    printf("\n O total da soma dos números registrados é: %d", soma);
    
    
}