#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

void formsCadastroCli(char cpf[], char nome[], char telefone[])
{
    printf("=== Cadastrando Dados ===\n");
    printf("\nDigite seu CPF: ");
    scanf("%14s", cpf);
    printf("Digite seu nome: ");
    scanf("%49s", nome);
    printf("Digite seu número de telefone: ");
    scanf("%14s", telefone);
}

void cadastroCli(FILE *arquivocli)
{
    char cpf[15], nome[50], telefone[15];
    formsCadastroCli(cpf, nome, telefone);

    fprintf(arquivocli, "CPF: %s\nNome: %s\nTelefone: %s\n\n", cpf, nome, telefone);
    printf("\nDados cadastrados com sucesso!\n");
}

void mostrarCliente(FILE *arquivocli)
{
    char linha[100];
    printf("\n=== Clientes Cadastrados ===\n");

    arquivocli = fopen("clientes.txt", "r");

    if (arquivocli == NULL)
    {
        printf("Erro ao abrir arquivo para leitura.\n");
        return;
    }

    while (fgets(linha, 100, arquivocli))
    {
        printf("%s", linha);
    }

    fclose(arquivocli);
    printf("\n============================\n");
}

void atualizarCliente()
{
    FILE *arquivocli, *temp; // <--- remove duplicação de "FILE *arquivocli"
    char cpfBusca[15], cpf[15], nome[50], telefone[15];
    int encontrado = 0;

    arquivocli = fopen("clientes.txt", "r");
    temp = fopen("temp.txt", "w");

    if (arquivocli == NULL || temp == NULL)
    {
        printf("Erro ao abrir os arquivos.\n");
        return;
    }

    printf("\nDigite o CPF do cliente que deseja atualizar: ");
    scanf("%14s", cpfBusca);

    while (fscanf(arquivocli, "CPF: %14s\nNome: %49s\nTelefone: %14s\n\n", cpf, nome, telefone) == 3)
    {
        if (strcmp(cpf, cpfBusca) == 0)
        {
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

void excluirCliente()
{
    FILE *arquivocli, *temp; // <--- remove duplicação
    char cpfBusca[15], cpf[15], nome[50], telefone[15];
    int encontrado = 0;

    arquivocli = fopen("clientes.txt", "r");
    temp = fopen("temp.txt", "w");

    if (arquivocli == NULL || temp == NULL)
    {
        printf("Erro ao abrir os arquivos.\n");
        return;
    }

    printf("\nDigite o CPF do cliente que deseja excluir: ");
    scanf("%14s", cpfBusca);

    while (fscanf(arquivocli, "CPF: %14s\nNome: %49s\nTelefone: %14s\n\n", cpf, nome, telefone) == 3)
    {
        if (strcmp(cpf, cpfBusca) != 0)
        {
            fprintf(temp, "CPF: %s\nNome: %s\nTelefone: %s\n\n", cpf, nome, telefone);
        }
        else
        {
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

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

// produto

void formsCadastroPro(char codigo[], char codigoF[], char nome[], char preco_unitario[])
{
    printf("=== Cadastrando Dados ===\n");
    printf("\nDigite o codigo do produto: ");
    scanf("%4s", codigo);
    printf("\nDigite o codigo do fornecedor: ");
    scanf("%4s", codigoF);
    printf("Digite seu nome: ");
    scanf("%49s", nome);
    printf("Digite seu preço unitário: ");
    scanf("%9s", preco_unitario);
}

void cadastroPro(FILE *arquivopro)
{
    char codigo[5], codigoF[5], nome[50], preco_unitario[10];
    formsCadastroPro(codigo, codigoF, nome, preco_unitario);

    fprintf(arquivopro, "Codigo: %s\nCodigo Fornecedor: %s\nNome: %s\nPreço: %s\n\n", codigo, codigoF, nome, preco_unitario);
    printf("\nDados cadastrados com sucesso!\n");
}

void mostrarProduto(FILE *arquivopro)
{
    char linha[100];
    printf("\n=== Produtos Cadastrados ===\n");

    arquivopro = fopen("produtos.txt", "r");

    if (arquivopro == NULL)
    {
        printf("Erro ao abrir arquivo para leitura.\n");
        return;
    }

    while (fgets(linha, 100, arquivopro))
    {
        printf("%s", linha);
    }

    fclose(arquivopro);
    printf("\n============================\n");
}

void atualizarProduto()
{
    FILE *arquivopro, *temp;
    char codigoBusca[5], codigo[5], codigoF[5], nome[50], preco_unitario[10];
    int encontrado = 0;

    arquivopro = fopen("produtos.txt", "r");
    temp = fopen("temp.txt", "w");

    if (arquivopro == NULL || temp == NULL)
    {
        printf("Erro ao abrir os arquivos.\n");
        return;
    }

    printf("\nDigite o codigo do produto que deseja atualizar: ");
    scanf("%s", codigoBusca);

    while (fscanf(arquivopro, "Codigo: %s\nCodigo Fornecedor: %s\nNome: %s\nPreço: %s\n\n", codigo, codigoF, nome, preco_unitario) == 4)
    {
        if (strcmp(codigo, codigoBusca) == 0)
        {
            encontrado = 1;
            printf("\nProduto encontrado!\n");
            printf("Digite o novo nome: ");
            scanf("%49s", nome);
            printf("Digite o novo preço: ");
            scanf("%9s", preco_unitario);
            printf("Digite o novo codigo de fornecedor: ");
            scanf("%4s", codigoF);
        }
        fprintf(temp, "Codigo: %s\nCodigo Fornecedor: %s\nNome: %s\nPreço: %s\n\n", codigo, codigoF, nome, preco_unitario);
    }

    fclose(arquivopro);
    fclose(temp);

    remove("produtos.txt");
    rename("temp.txt", "produtos.txt");

    if (encontrado)
        printf("\nProduto atualizado com sucesso!\n");
    else
        printf("\nCodigo não encontrado!\n");
}

void excluirProduto()
{
    FILE *arquivopro, *temp;
    char codigoBusca[5], codigo[5], codigoF[5], nome[50], preco_unitario[10];
    int encontrado = 0;

    arquivopro = fopen("produtos.txt", "r");
    temp = fopen("temp.txt", "w");

    if (arquivopro == NULL || temp == NULL)
    {
        printf("Erro ao abrir os arquivos.\n");
        return;
    }

    printf("\nDigite o codigo do produto que deseja excluir: ");
    scanf("%14s", codigoBusca);

    while (fscanf(arquivopro, "Codigo: %s\nCodigo Fornecedor: %s\nNome: %s\nPreço: %s\n\n", codigo, codigoF, nome, preco_unitario) == 4)
    {
        if (strcmp(codigo, codigoBusca) != 0)
        {
            fprintf(temp, "Codigo: %s\nCodigo Fornecedor: %s\nNome: %s\nPreço: %s\n\n", codigo, codigoF, nome, preco_unitario);
        }
        else
        {
            encontrado = 1;
        }
    }

    fclose(arquivopro);
    fclose(temp);

    remove("produtos.txt");
    rename("temp.txt", "produtos.txt");

    if (encontrado)
        printf("\nProduto excluído com sucesso!\n");
    else
        printf("\nProduto não encontrado!\n");
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Fornecedor

void formsCadastroFor(char codigo[], char telefone[], char nome[], char email[])
{
    printf("=== Cadastrando Dados ===\n");
    printf("\nDigite o codigo do fornecedor: ");
    scanf("%4s", codigo);
    printf("\nDigite o telefone: ");
    scanf("%14s", telefone);
    printf("Digite seu nome: ");
    scanf("%49s", nome);
    printf("Digite seu email: ");
    scanf("%49s", email);
}

void cadastroFor(FILE *arquivofor)
{
    char codigo[5], telefone[15], nome[50], email[50];
    formsCadastroFor(codigo, telefone, nome, email);

    fprintf(arquivofor, "Codigo: %s\nTelefone: %s\nNome: %s\nEmail: %s\n\n", codigo, telefone, nome, email);
    printf("\nDados cadastrados com sucesso!\n");
}

void mostrarFornecedor(FILE *arquivofor)
{

    char linha[100];
    printf("\n=== Fornecedores Cadastrados ===\n");

    arquivofor = fopen("fornecedores.txt", "r");

    if (arquivofor == NULL)
    {
        printf("Erro ao abrir arquivo para leitura.\n");
        return;
    }

    while (fgets(linha, 100, arquivofor))
    {
        printf("%s", linha);
    }

    fclose(arquivofor);
    printf("\n============================\n");
}

void atualizarFornecedor()
{
    FILE *arquivofor, *temp;
    char codigoBusca[5], codigo[5], nome[50], telefone[15], email[50];
    int encontrado = 0;

    arquivofor = fopen("fornecedores.txt", "r");
    temp = fopen("temp.txt", "w");

    if (arquivofor == NULL || temp == NULL)
    {
        printf("Erro ao abrir os arquivos.\n");
        return;
    }

    printf("\nDigite o Codigo do fornecedor que deseja atualizar: ");
    scanf("%14s", codigoBusca);

    while (fscanf(arquivofor, "Codigo: %14s\nNome: %49s\nTelefone: %14s\nEmail: %49s\n \n", codigo, nome, telefone, email) == 4)
    {
        if (strcmp(codigo, codigoBusca) == 0)
        {
            encontrado = 1;
            printf("\nFornecedor encontrado!\n");
            printf("Digite o novo nome: ");
            scanf("%49s", nome);
            printf("Digite o novo telefone: ");
            scanf("%14s", telefone);
            printf("Digite o novo email: ");
            scanf("%49s", email);
        }
        fprintf(temp, "Codigo: %s\nNome: %s\nTelefone: %s\nEmail: %s\n\n", codigo, nome, telefone, email);
    }

    fclose(arquivofor);
    fclose(temp);

    remove("fornecedores.txt");
    rename("temp.txt", "fornecedores.txt");

    if (encontrado)
        printf("\nFornecedor atualizado com sucesso!\n");
    else
        printf("\nFornecedor não encontrado!\n");
}

void excluirFornecedor()
{
    FILE *arquivofor, *temp;
    char codigoBusca[5], codigo[5], telefone[15], nome[50], email[50];
    int encontrado = 0;

    arquivofor = fopen("fornecedores.txt", "r");
    temp = fopen("temp.txt", "w");

    if (arquivofor == NULL || temp == NULL)
    {
        printf("Erro ao abrir os arquivos.\n");
        return;
    }

    printf("\nDigite o codigo do fornecedor que deseja excluir: ");
    scanf("%14s", codigoBusca);

    while (fscanf(arquivofor, "Codigo: %s\nTelefone: %s\nNome: %s\nEmail: %s\n\n", codigo, telefone, nome, email) == 4)
    {
        if (strcmp(codigo, codigoBusca) != 0)
        {
            fprintf(temp, "Codigo: %s\nTelefone: %s\nNome: %s\nEmail: %s\n\n", codigo, telefone, nome, email);
        }
        else
        {
            encontrado = 1;
        }
    }

    fclose(arquivofor);
    fclose(temp);

    remove("fornecedores.txt");
    rename("temp.txt", "fornecedores.txt");

    if (encontrado)
        printf("\nFornecedor excluído com sucesso!\n");
    else
        printf("\n Fornecedor não encontrado!\n");
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// venda

void formsCadastroVen(char codigo[], char codigo_produto[], char data[], char total[])
{
    printf("=== Cadastrando Dados ===\n");
    printf("\nDigite o codigo da venda: ");
    scanf("%4s", codigo);
    printf("\nDigite o codigo do produto: ");
    scanf("%4s", codigo_produto);
    printf("Digite a data da venda: ");
    scanf("%11s", data);
    printf("Digite o total da sua compra: ");
    scanf("%9s", total);
}

void cadastroVen(FILE *arquivoven)
{
    char codigo[5], codigo_produto[5], data[12], total[10];
    formsCadastroVen(codigo, codigo_produto, data, total);

    fprintf(arquivoven, "Codigo: %s\nCodigo do produto: %s\nData: %s\nTotal: %s\n\n", codigo, codigo_produto, data, total);
    printf("\nDados cadastrados com sucesso!\n");
}

void mostrarVendas(FILE *arquivoven)
{
    char linha[100];
    printf("\n=== Vendas Cadastradas ===\n");

    arquivoven = fopen("vendas.txt", "r");

    if (arquivoven == NULL)
    {
        printf("Erro ao abrir arquivo para leitura.\n");
        return;
    }

    while (fgets(linha, 100, arquivoven))
    {
        printf("%s", linha);
    }

    fclose(arquivoven);
    printf("\n============================\n");
}

void atualizarVenda()
{
    FILE *arquivoven, *temp;
    char codigoBusca[5], codigo[5], codigo_produto[5], data[12], total[10];
    int encontrado = 0;

    arquivoven = fopen("vendas.txt", "r");
    temp = fopen("temp.txt", "w");

    if (arquivoven == NULL || temp == NULL)
    {
        printf("Erro ao abrir os arquivos.\n");
        return;
    }

    printf("\nDigite o Codigo da venda que deseja atualizar: ");
    scanf("%14s", codigoBusca);

    while (fscanf(arquivoven, "Codigo: %4s\nCodigo do produto: %4s\nData: %11s\nTotal: %9s\n\n", codigo, codigo_produto, data, total) == 4)
    {
        if (strcmp(codigo, codigoBusca) == 0)
        {
            encontrado = 1;
            printf("\nVenda encontrada!\n");
            printf("Digite o novo codigo de produto: ");
            scanf("%4s", codigo_produto);
            printf("Digite a nova data: ");
            scanf("%11s", data);
            printf("Digite o novo total: ");
            scanf("%9s", total);
        }
        fprintf(temp, "Codigo: %4s\nCodigo do Produto: %4s\nData: %11s\nTotal: %9s\n\n", codigo, codigo_produto, data, total);
    }

    fclose(arquivoven);
    fclose(temp);

    remove("vendas.txt");
    rename("temp.txt", "vendas.txt");

    if (encontrado)
        printf("\nVenda atualizada com sucesso!\n");
    else
        printf("\nVenda não encontrada!\n");
}

void excluirVenda()
{
    FILE *arquivoven, *temp;
    char codigoBusca[5], codigo[5], codigo_produto[5], data[12], total[10];
    int encontrado = 0;

    arquivoven = fopen("vendas.txt", "r");
    temp = fopen("temp.txt", "w");

    if (arquivoven == NULL || temp == NULL)
    {
        printf("Erro ao abrir os arquivos.\n");
        return;
    }

    printf("\nDigite o codigo da venda que deseja excluir: ");
    scanf("%14s", codigoBusca);

    while (fscanf(arquivoven, "Codigo: %4s\nCodigo do Produto: %4s\nData: %11s\nTotal: %9s\n\n", codigo, codigo_produto, data, total) == 4)
    {
        if (strcmp(codigo, codigoBusca) != 0)
        {
            fprintf(temp, "Codigo: %4s\nCodigo do Produto: %4s\nData: %11s\nTotal: %9s\n\n", codigo, codigo_produto, data, total);
        }
        else
        {
            encontrado = 1;
        }
    }

    fclose(arquivoven);
    fclose(temp);

    remove("vendas.txt");
    rename("temp.txt", "vendas.txt");

    if (encontrado)
        printf("\nVenda excluída com sucesso!\n");
    else
        printf("\nVenda não encontrada!\n");
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// menus

void menuOpcoes(FILE *arquivocli, FILE *arquivopro, FILE *arquivofor, FILE *arquivoven, int opcAnt)
{
    int opc = 0;

    do
    {
        printf("\n=== Escolha uma opção ===\n");
        printf("\n1 - Cadastrar");
        printf("\n2 - Consultar");
        printf("\n3 - Alterar");
        printf("\n4 - Excluir");
        printf("\n0 - Voltar");
        printf("\nEscolha uma opção: ");
        scanf("%d", &opc);

        switch (opc)
        {
        case 1:
            if (opcAnt == 1)
            {
                arquivocli = fopen("clientes.txt", "a");
                if (arquivocli == NULL)
                {
                    printf("Erro ao abrir arquivo.\n");
                }
                else
                {
                    cadastroCli(arquivocli);
                    fclose(arquivocli);
                }
            }
            else if (opcAnt == 2)
            {
                arquivopro = fopen("produtos.txt", "a");
                if (arquivopro == NULL)
                {
                    printf("Erro ao abrir arquivo.\n");
                }
                else
                {
                    cadastroPro(arquivopro);
                    fclose(arquivopro);
                }
            }
            else if (opcAnt == 3)
            {
                arquivofor = fopen("fornecedores.txt", "a");
                if (arquivofor == NULL)
                {
                    printf("Erro ao abrir arquivo.\n");
                }
                else
                {
                    cadastroFor(arquivofor);
                    fclose(arquivofor);
                }
            }
            else if (opcAnt == 4)
            {
                arquivoven = fopen("vendas.txt", "a");
                if (arquivoven == NULL)
                {
                    printf("Erro ao abrir arquivo.\n");
                }
                else
                {
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
            else if (opcAnt == 2)
            {
                mostrarProduto(arquivopro);
            }
            else if (opcAnt == 3)
            {
                mostrarFornecedor(arquivofor);
            }
            else if (opcAnt == 4)
            {
                mostrarVendas(arquivoven);
            }

            break;

        case 3:
            if (opcAnt == 1)
            {
                atualizarCliente();
            }
            else if (opcAnt == 2)
            {
                atualizarProduto();
            }
            else if (opcAnt == 3)
            {
                atualizarFornecedor();
            }
            else if (opcAnt == 4)
            {
                atualizarVenda();
            }

            break;

        case 4:
            if (opcAnt == 1)
            {
                excluirCliente();
            }
            else if (opcAnt == 2)
            {
                excluirProduto();
            }
            else if (opcAnt == 3)
            {
                excluirFornecedor();
            }
            else if (opcAnt == 4)
            {
                excluirVenda();
            }

            break;

        case 0:
            return;

        default:
            printf("\nOpção inválida! Tente novamente.\n");
            break;
        }
    } while (opc != 0);
}

void menu(FILE *arquivocli, FILE *arquivopro, FILE *arquivofor, FILE *arquivoven)
{
    int opc = 0;

    do
    {
        printf("\n=== Escolha uma opção ===\n");
        printf("\n1 - Cliente");
        printf("\n2 - Produtos");
        printf("\n3 - Fornecedores");
        printf("\n4 - Vendas");
        printf("\n0 - Sair");
        printf("\nEscolha uma opção: ");
        scanf("%d", &opc);

        switch (opc)
        {
        case 1:
            menuOpcoes(arquivocli, arquivopro, arquivofor, arquivoven, opc);
            break;
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

int main()
{
    setlocale(LC_ALL, "Portuguese");

    FILE *arquivocli;
    arquivocli = fopen("clientes.txt", "a");
    if (arquivocli == NULL)
    {
        printf("Erro ao abrir arquivo.\n");
        return 1;
    }
    else
    {
        printf("Arquivo criado com sucesso!\n");
    }

    fclose(arquivocli);

    FILE *arquivopro;
    arquivopro = fopen("produtos.txt", "a");
    if (arquivopro == NULL)
    {
        printf("Erro ao abrir arquivo.\n");
        return 1;
    }
    else
    {
        printf("Arquivo criado com sucesso!\n");
    }

    fclose(arquivopro);

    FILE *arquivofor;
    arquivofor = fopen("fornecedores.txt", "a");
    if (arquivofor == NULL)
    {
        printf("Erro ao abrir arquivo.\n");
        return 1;
    }
    else
    {
        printf("Arquivo criado com sucesso!\n");
    }

    fclose(arquivofor);

    FILE *arquivoven;
    arquivoven = fopen("vendas.txt", "a");
    if (arquivoven == NULL)
    {
        printf("Erro ao abrir arquivo.\n");
        return 1;
    }
    else
    {
        printf("Arquivo criado com sucesso!\n");
    }

    fclose(arquivoven);

    menu(arquivocli, arquivopro, arquivofor, arquivoven);

    return 0;
}
