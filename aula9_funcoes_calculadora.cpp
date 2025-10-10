#include<stdio.h>
#include<locale.h>

float entradaDeDados(){
    float numero;
    printf("Informe um número: ");
    scanf("%f", &numero);
    return numero;
}

float soma(float n1, float n2){
    float resultado;
    resultado = n1 + n2;
    return resultado;
}

float subtracao(float n1, float n2){
    float resultado;
    resultado = n1 - n2;
    return resultado;
}

float multiplicacao(float n1, float n2){
    float resultado;
    resultado = n1 * n2;
    return resultado;
}

float divisao(float n1, float n2){
    float resultado;
    resultado = n1 / n2;
    return resultado;
}

void exibirResultados(float valor){
    printf("\n %1.f \n", valor);
}

main(){
    setlocale(LC_ALL, "Portuguese");
    float a, b;
    a = entradaDeDados();
    b = entradaDeDados();
    exibirResultados(soma(a,b));
    exibirResultados(subtracao(a,b));
    exibirResultados(multiplicacao(a,b));
    exibirResultados(divisao(a,b));
}

