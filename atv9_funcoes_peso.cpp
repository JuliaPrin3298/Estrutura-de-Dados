#include <stdio.h>
#include <locale.h>

float lerAltura()
{
    float alt;
    printf("Digite sua Altura: ");
    scanf("%f", &alt);
    return alt;
}

char lerSexo()
{
    char sexo;
    do
    {
        printf("Escolha as opções: (F - M)");
        printf("\n F - Feminino");
        printf("\n M - Masculino\n ");
        scanf(" %c", &sexo);
    } while (sexo != 'F' && sexo != 'f' && sexo != 'M' && sexo != 'm');
    return sexo;
}

float pesoIdeal(float alt, char sexo)
{
    float ideal;
    if (sexo == 'F' || sexo == 'f')
    {
        ideal = 62.1 * alt - 44.7;
    }
    else
    {
        ideal = 72.7 * alt - 58;
    }
    return ideal;
}

void exibirResultado(float ideal)
{
    printf("\n O seu peso ideal é: %.2f ", ideal);
}

main()
{
    float a;
    char s;
    a = lerAltura();
    s = lerSexo();
    exibirResultado(pesoIdeal(a, s));
}
