#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char Magenda[100][3][50]; // até 100 contatos, cada um com [nome, email, telefone]
    int opcao = 1;
    int usuarios = 0;

    while (opcao == 1 && usuarios < 100) {
        printf("\nDigite seu nome: ");
        scanf("%s", Magenda[usuarios][0]);

        printf("\nDigite seu email: ");
        scanf("%s", Magenda[usuarios][1]);

        printf("\nDigite seu telefone: ");
        scanf("%s", Magenda[usuarios][2]);

        usuarios++;

        printf("\nVocê quer cadastrar novo usuário?\nDigite 1 para continuar\nDigite 0 para sair: ");
        scanf("%d", &opcao);
    }

    printf("\n--- Lista de Contatos ---\n");
    for (int i = 0; i < usuarios; i++) {
        printf("\nContato %d:\n", i + 1);
        printf("Nome: %s\n", Magenda[i][0]);
        printf("Email: %s\n", Magenda[i][1]);
        printf("Telefone: %s\n", Magenda[i][2]);
    }

    return 0;
}
