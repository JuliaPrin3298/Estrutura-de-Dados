#include<stdio.h>
#include<locale.h>

/*
o usuário pode digitar vários números seguidos e, cada vez que o usuário digitar o número,
ele vai sendo somado, entretanto, quando o usuário digitar o número 0, a repetição da soma se encerra,
ou seja, o programa acaba.
*/

int main(){
    setlocale(LC_ALL, "Portuguese");

    int soma = 0, i;

    while (i != 0)
    {
        i = 0;
        printf("Digite o um número: ");
        scanf("%d", &i);
        soma = soma + i;
    }
    
    printf("Soma dos números digitados é: %d", soma);
}