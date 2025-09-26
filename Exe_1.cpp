// Crie um programa que peça o nome e a idade do usuário e depois imprima:
//Olá, [nome], você tem [idade] anos.
//Maioridade: Peça a idade e diga se a pessoa é maior de idade (>=18) ou menor de idade.
//Reverso da string: Peça uma palavra e imprima ela de trás pra frente.

#include<stdio.h>
#include<locale.h>
#include<string.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    char nome[50];
    int idade;
    char palavra[20];

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("\nDigite sua idade: ");
    scanf("%d", &idade);

    printf("\nDigite uma palavra: ");
    scanf("%s", palavra);

    printf("\n Dados Coletados\n");
    printf("Olá, %s, você tem %d anos.", nome, idade);

    if(idade >= 18){
        printf("\nMaior de idade.");
    }else{
        printf("\nMenor de idade.");
    }

    strrev(palavra);
    printf("\nPalavra invertida: %s", palavra);

    return 0;

}