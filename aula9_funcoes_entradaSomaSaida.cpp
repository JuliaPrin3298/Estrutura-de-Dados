#include<stdio.h>
#include<locale.h>

float entradaDados(){
    float numero;
    printf("Insira o valor: ");
    scanf("%f", &numero);
    return numero;
}

float soma(float n1, float n2){
    float resultado;
    resultado = n1 + n2;
    return resultado;
}

void exibirResultado(float valor){
    printf("\n %1f \n", valor);
}

main(){
    setlocale(LC_ALL, "Portuguese");
    float a, b;
    a = entradaDados();
    b = entradaDados();
    exibirResultado(soma(a,b));
}