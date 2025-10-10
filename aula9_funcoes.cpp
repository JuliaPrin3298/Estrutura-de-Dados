#include<stdio.h>
#include<locale.h>

//funcao digitar(), não retorna nada(void) e não tem argumentos 

void digitar(){
    printf("Digite um número: ");
}

//funcao soma(), não retorna nda e tem dois argumentos 
void soma(int n1, int n2){
    int total;
    total = n1 + n2;
    printf("Soma = %d\n", total);
}


main(){
    setlocale(LC_ALL, "Portuguese");
    int a, b;
    digitar();//chamando a funcao digitar()
    scanf("%d", &a);
    digitar();//chamando a funcao digitar()
    scanf("%d", &b);
    soma(a,b);//chamando a funcao e passando os valores de a para n1 e b para n2
}
