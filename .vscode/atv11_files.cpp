#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

void formsCadastroCli(char cpf[], char nome[], char telefone[]) {
    printf("=== Cadastrando Dados ===\n");
    printf("\nDigite seu CPF: ");
    scanf("%14s", cpf);
    printf("Digite seu nome: ");
    scanf("%49s", nome);
    printf("Digite seu número de telefone: ");
    scanf("%14s", telefone);
}

void cadastroCli(FILE *arquivo) {
    char cpf[15], nome[50], telefone[15];
    formsCadastroCli(cpf, nome, telefone);

    fprintf(arquivo, "CPF: %s\nNome: %s\nTelefone: %s\n\n", cpf, nome, telefone);
    printf("\nDados cadastrados com sucesso!\n");
}

void mostrarCliente(FILE *arquivo) {
    char linha[100];
    printf("\n=== Clientes Cadastrados ===\n");

    fclose(arquivo);
    arquivo = fopen("clientes.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir arquivo para leitura.\n");
        return;
    }

    while (fgets(linha, 100, arquivo)) {
        printf("%s", linha);
    }

    fclose(arquivo);
    printf("\n============================\n");
}

void atualizarCliente() {
    FILE *arquivo, *temp; // <--- remove duplicação de "FILE *arquivo"
    char cpfBusca[15], cpf[15], nome[50], telefone[15];
    int encontrado = 0;

    arquivo = fopen("clientes.txt", "r");
    temp = fopen("temp.txt", "w");

    if (arquivo == NULL || temp == NULL) {
        printf("Erro ao abrir os arquivos.\n");
        return;
    }

    printf("\nDigite o CPF do cliente que deseja atualizar: ");
    scanf("%14s", cpfBusca);

    while (fscanf(arquivo, "CPF: %14s\nNome: %49s\nTelefone: %14s\n\n", cpf, nome, telefone) == 3) {
        if (strcmp(cpf, cpfBusca) == 0) {
            encontrado = 1;
            printf("\nCliente encontrado!\n");
            printf("Digite o novo nome: ");
            scanf("%49s", nome);
            printf("Digite o novo telefone: ");
            scanf("%14s", telefone);
        }
        fprintf(temp, "CPF: %s\nNome: %s\nTelefone: %s\n\n", cpf, nome, telefone);
    }

    fclose(arquivo);
    fclose(temp);

    remove("clientes.txt");
    rename("temp.txt", "clientes.txt");

    if (encontrado)
        printf("\nCliente atualizado com sucesso!\n");
    else
        printf("\nCPF não encontrado!\n");
}

void excluirCliente() {
    FILE *arquivo, *temp; // <--- remove duplicação
    char cpfBusca[15], cpf[15], nome[50], telefone[15];
    int encontrado = 0;

    arquivo = fopen("clientes.txt", "r");
    temp = fopen("temp.txt", "w");

    if (arquivo == NULL || temp == NULL) {
        printf("Erro ao abrir os arquivos.\n");
        return;
    }

    printf("\nDigite o CPF do cliente que deseja excluir: ");
    scanf("%14s", cpfBusca);

    while (fscanf(arquivo, "CPF: %14s\nNome: %49s\nTelefone: %14s\n\n", cpf, nome, telefone) == 3) {
        if (strcmp(cpf, cpfBusca) != 0) {
            fprintf(temp, "CPF: %s\nNome: %s\nTelefone: %s\n\n", cpf, nome, telefone);
        } else {
            encontrado = 1;
        }
    }

    fclose(arquivo);
    fclose(temp);

    remove("clientes.txt");
    rename("temp.txt", "clientes.txt");

    if (encontrado)
        printf("\nCliente excluído com sucesso!\n");
    else
        printf("\nCPF não encontrado!\n");
}

void menuOpcoes(FILE *arquivo) {
    int opc = 0;

    do {
        printf("\n=== Escolha uma opção ===\n");
        printf("\n1 - Cadastrar");
        printf("\n2 - Consultar");
        printf("\n3 - Alterar");
        printf("\n4 - Excluir");
        printf("\n0 - Voltar");
        printf("\nEscolha uma opção: ");
        scanf("%d", &opc);

        switch (opc) {
            case 1:
                arquivo = fopen("clientes.txt", "a");
                if (arquivo == NULL) {
                    printf("Erro ao abrir arquivo.\n");
                } else {
                    cadastroCli(arquivo);
                    fclose(arquivo);
                }
                break;

            case 2:
                mostrarCliente(arquivo);
                break;

            case 3:
                atualizarCliente();
                break;

            case 4:
                excluirCliente();
                break;

            case 0:
                
                break;

            default:
                printf("\nOpção inválida! Tente novamente.\n");
                break;
        }
    } while (opc != 0);
}

void menu() {
    int opc = 0;

    do {
        printf("\n=== Escolha uma opção ===\n");
        printf("\n1 - Cadast");
        printf("\n2 - Consultar");
        printf("\n3 - Alterar");
        printf("\n4 - Excluir");
        printf("\n0 - Voltar");
        printf("\nEscolha uma opção: ");
        scanf("%d", &opc);

        switch (opc) {
            case 1:
                arquivo = fopen("clientes.txt", "a");
                if (arquivo == NULL) {
                    printf("Erro ao abrir arquivo.\n");
                } else {
                    cadastroCli(arquivo);
                    fclose(arquivo);
                }
                break;

            case 2:
                mostrarCliente(arquivo);
                break;

            case 3:
                atualizarCliente();
                break;

            case 4:
                excluirCliente();
                break;

            case 0:
                
                break;

            default:
                printf("\nOpção inválida! Tente novamente.\n");
                break;
        }
    } while (opc != 0);
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    FILE *arquivo;
    arquivo = fopen("clientes.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir arquivo.\n");
        return 1;
    } else {
        printf("Arquivo criado com sucesso!\n");
    }

    fclose(arquivo);
    menu(arquivo);

    return 0;
}
