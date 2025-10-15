#include<stdio.h>
#include<locale.h>

int lerAnos(){
    int anos;
    printf("Digite sua idade em anos meses e dias");
    printf("\nAnos: ");
    scanf("%d", &anos);
    return anos;
}

int lerMeses(){
    int meses;
    printf("\nMeses: ");
    scanf("%d", &meses);
    return meses;
}

int lerDias(){
    int dias;
    printf("\nDias: ");
    scanf("%d", &dias);
    return dias;
}

int contaIdade(int anos, int meses, int dias){
    int idade;
    idade = (anos * 365) + (meses * 30) + dias;
    return idade;
}

void exibirResultado(int idadeDias){
    printf("\n A sua idade em dias é %d", idadeDias);
}


int main()
{

    setlocale(LC_ALL, "Portuguese");
    int a, m, d;
    a = lerAnos();
    m = lerMeses();
    d = lerDias();
    exibirResultado(contaIdade(a,m,d));

}
