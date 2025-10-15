#include <stdio.h>
#include <locale.h>

int numeroPositivo()
{
    int num;

    do
    {
        printf("Digite um número inteiro positivo: ");
        scanf("%d", &num);
        if (num < 0)
        {
            printf("Número inválido! Digite um valor positivo.\n");
        }
    } while (num < 0);
    return num;
}

int calcularFatorial(int n)
{
    int fat = 1;

    for (int i = 1; i <= n; i++)
    {
        fat *= i;
    }

    return fat;
}

void exibirResultado(int n, int fat)
{
    printf("\nO fatorial de %d é %d\n", n, fat);
}

int main()
{
    int numero, fatorial;

    setlocale(LC_ALL, "Portuguese");
    numero = numeroPositivo();
    fatorial = calcularFatorial(numero);
    exibirResultado(numero, fatorial);
    return 0;
}
