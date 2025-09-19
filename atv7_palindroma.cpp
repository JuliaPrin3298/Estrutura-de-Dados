#include<stdio.h>
#include<locale.h>
#include<string.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    int valor;
    char palavra[15], inversa[15];

    printf("\n Digite uma palavra: ");
    gets(palavra);

    strcpy(inversa, palavra);
    printf("\n Testando a Função strcpy: %s - %s", palavra, inversa);

    strrev(inversa);
    printf("\n Testando a função strrev: %s - %s", palavra, inversa);

    valor = strcmp(palavra, inversa);
    printf("\n Testando o retorno da função strcmp: %d", valor);

    if(valor == 0 )
    printf("\n A palavra %s é palíndroma\n", palavra);
    else
    printf("\n A palavra %s não é palíndroma");
}