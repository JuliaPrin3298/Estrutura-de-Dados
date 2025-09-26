#include<stdio.h>
#include<locale.h>

/*
Pode ser aplicado algo parecido com uma agenda, 
em que o código implementado será uma lista que irá guardar contatos,
os quais devem possuir alguns dados,
como: nome, telefone e e-mail do contato em uma matriz.
*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    char Mnome[20] = "Julia";
    char Memail[50] = "teste@gmail.com";
    char Mtelefone[15] = "5511990440894";

    printf("Nome: %s\n", Mnome);
    printf("Email: %s\n", Memail);
    printf("Telefone: %s\n", Mtelefone);

    return 0;
}
