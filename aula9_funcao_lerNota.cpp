#include<stdio.h>
#include<locale.h>

//Ler_nota() retorna um valor do tipo float e nao tem argumento
float lerNota(){
    float n;
    printf("Digite a nota: ");
    scanf("%f", &n);
    return n;
}

// a funcao media() possui dois argumentos e nao tem retorno 

void media(float n1, float n2){
    float media = n1 + n2/2;
    if (media >= 7)
    {
        printf("Média = %1.f - Aprovado", media);
    }else{
        printf("Média = %1.f - Reprovado", media);
    }
}

main(){
    setlocale(LC_ALL, "Portuguse");
    float a, b;
    a = lerNota();
    b = lerNota();
    media(a,b);
}