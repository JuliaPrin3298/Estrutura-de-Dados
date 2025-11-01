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

void cadastroCli(FILE *arquivocli) {
    char cpf[15], nome[50], telefone[15];
    formsCadastroCli(cpf, nome, telefone);

    fprintf(arquivocli, "CPF: %s\nNome: %s\nTelefone: %s\n\n", cpf, nome, telefone);
    printf("\nDados cadastrados com sucesso!\n");
}

void mostrarCliente(FILE *arquivocli) {
    char linha[100];
    printf("\n=== Clientes Cadastrados ===\n");

    fclose(arquivocli);
    arquivocli = fopen("clientes.txt", "r");

    if (arquivocli == NULL) {
        printf("Erro ao abrir arquivo para leitura.\n");
        return;
    }

    while (fgets(linha, 100, arquivocli)) {
        printf("%s", linha);
    }

    fclose(arquivocli);
    printf("\n============================\n");
}

void atualizarCliente() {
    FILE *arquivocli, *temp; // <--- remove duplicação de "FILE *arquivocli"
    char cpfBusca[15], cpf[15], nome[50], telefone[15];
    int encontrado = 0;

    arquivocli = fopen("clientes.txt", "r");
    temp = fopen("temp.txt", "w");

    if (arquivocli == NULL || temp == NULL) {
        printf("Erro ao abrir os arquivos.\n");
        return;
    }

    printf("\nDigite o CPF do cliente que deseja atualizar: ");
    scanf("%14s", cpfBusca);

    while (fscanf(arquivocli, "CPF: %14s\nNome: %49s\nTelefone: %14s\n\n", cpf, nome, telefone) == 3) {
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

    fclose(arquivocli);
    fclose(temp);

    remove("clientes.txt");
    rename("temp.txt", "clientes.txt");

    if (encontrado)
        printf("\nCliente atualizado com sucesso!\n");
    else
        printf("\nCPF não encontrado!\n");
}

void excluirCliente() {
    FILE *arquivocli, *temp; // <--- remove duplicação
    char cpfBusca[15], cpf[15], nome[50], telefone[15];
    int encontrado = 0;

    arquivocli = fopen("clientes.txt", "r");
    temp = fopen("temp.txt", "w");

    if (arquivocli == NULL || temp == NULL) {
        printf("Erro ao abrir os arquivos.\n");
        return;
    }

    printf("\nDigite o CPF do cliente que deseja excluir: ");
    scanf("%14s", cpfBusca);

    while (fscanf(arquivocli, "CPF: %14s\nNome: %49s\nTelefone: %14s\n\n", cpf, nome, telefone) == 3) {
        if (strcmp(cpf, cpfBusca) != 0) {
            fprintf(temp, "CPF: %s\nNome: %s\nTelefone: %s\n\n", cpf, nome, telefone);
        } else {
            encontrado = 1;
        }
    }

    fclose(arquivocli);
    fclose(temp);

    remove("clientes.txt");
    rename("temp.txt", "clientes.txt");

    if (encontrado)
        printf("\nCliente excluído com sucesso!\n");
    else
        printf("\nCPF não encontrado!\n");
}

void formsCadastroPro(int codigo[], int codigoF[], char nome[], float preco_unitario[]) {
    printf("=== Cadastrando Dados ===\n");
    printf("\nDigite o codigo do produto: ");
    scanf("%d", codigo);
    printf("\nDigite o codigo do fornecedor: ");
    scanf("%d", codigoF);
    printf("Digite seu nome: ");
    scanf("%49s", nome);
    printf("Digite seu preço unitário: ");
    scanf("%2.f", preco_unitario);
}

void cadastroCli(FILE *arquivopro) {
    int codigo[5], int codigoF[5];char nome[50];float telefone[15];
    formsCadastroCli(cpf, nome, telefone);

    fprintf(arquivocli, "CPF: %s\nNome: %s\nTelefone: %s\n\n", cpf, nome, telefone);
    printf("\nDados cadastrados com sucesso!\n");
}

void menuOpcoes(FILE *arquivocli, FILE *arquivopro, FILE *arquivofor, FILE *arquivoven,int opcAnt) {
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
            if (opcAnt == 1)
            {
                arquivocli = fopen("clientes.txt", "a");
                if (arquivocli == NULL) {
                    printf("Erro ao abrir arquivo.\n");
                } else {
                    cadastroCli(arquivocli);
                    fclose(arquivocli);
                }
            } else if(opcAnt == 2){
                arquivopro = fopen("produtos.txt", "a");
                if (arquivopro == NULL) {
                    printf("Erro ao abrir arquivo.\n");
                } else {
                    cadastroPro(arquivopro);
                    fclose(arquivopro);
                }
            } else if(opcAnt == 3){
                arquivofor = fopen("fornecedores.txt", "a");
                if (arquivofor == NULL) {
                    printf("Erro ao abrir arquivo.\n");
                } else {
                    cadastroFor(arquivofor);
                    fclose(arquivofor);
                }
            } else if(opcAnt == 4){
                arquivoven = fopen("vendas.txt", "a");
                if (arquivoven == NULL) {
                    printf("Erro ao abrir arquivo.\n");
                } else {
                    cadastroVen(arquivoven);
                    fclose(arquivoven);
                }
            }
            
                break;

            case 2:
            if (opcAnt == 1)
            {
                 mostrarCliente(arquivocli);
            }
            
               
                break;

            case 3:
            if (opcAnt == 1)
            {
                atualizarCliente();
            }
            
                
                break;

            case 4:
            if (opcAnt == 1)
            {
                /* code */
            }
            
                excluirCliente();
                break;

            case 0:
                menu(arquivocli, arquivopro, arquivofor, arquivoven);
                break;

            default:
                printf("\nOpção inválida! Tente novamente.\n");
                break;
        }
    } while (opc != 0);
}

void menu(FILE *arquivocli, FILE *arquivopro, FILE *arquivofor, FILE *arquivoven) {
    int opc = 0;

    do {
        printf("\n=== Escolha uma opção ===\n");
        printf("\n1 - Cliente");
        printf("\n2 - Produtos");
        printf("\n3 - Fornecedores");
        printf("\n4 - Vendas");
        printf("\n0 - Sair");
        printf("\nEscolha uma opção: ");
        scanf("%d", &opc);

        switch (opc) {
            case 1:
                menuOpcoes(arquivocli, arquivopro, arquivofor, arquivoven, opc);
            case 2:
                menuOpcoes(arquivocli, arquivopro, arquivofor, arquivoven, opc);
                break;

            case 3:
                menuOpcoes(arquivocli, arquivopro, arquivofor, arquivoven, opc);
                break;

            case 4:
                menuOpcoes(arquivocli, arquivopro, arquivofor, arquivoven, opc);
                break;

            case 0:
                printf("\nSaindo do sistema...");
                break;

            default:
                printf("\nOpção inválida! Tente novamente.\n");
                break;
        }
    } while (opc != 0);
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    FILE *arquivocli;
    arquivocli = fopen("clientes.txt", "w");
    if (arquivocli == NULL) {
        printf("Erro ao abrir arquivo.\n");
        return 1;
    } else {
        printf("Arquivo criado com sucesso!\n");
    }

    fclose(arquivocli);
    
    FILE *arquivopro;
    arquivopro = fopen("produtos.txt", "w");
    if (arquivopro == NULL) {
        printf("Erro ao abrir arquivo.\n");
        return 1;
    } else {
        printf("Arquivo criado com sucesso!\n");
    }

    fclose(arquivopro);

    FILE *arquivofor;
    arquivofor = fopen("fornecedores.txt", "w");
    if (arquivofor == NULL) {
        printf("Erro ao abrir arquivo.\n");
        return 1;
    } else {
        printf("Arquivo criado com sucesso!\n");
    }

    fclose(arquivofor);

    FILE *arquivoven;
    arquivoven = fopen("vendas.txt", "w");
    if (arquivoven == NULL) {
        printf("Erro ao abrir arquivo.\n");
        return 1;
    } else {
        printf("Arquivo criado com sucesso!\n");
    }

    fclose(arquivoven);


    menu(arquivocli, arquivopro, arquivofor, arquivoven);

    return 0;
}
