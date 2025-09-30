#include <stdio.h>
#include <locale.h>

int main() {
    
    setlocale(LC_ALL, "Portuguese");

    char sexo, corO, corC;
    int idade;
    int maior_idade = 0;
    int contador_fem = 0;
    int i;

    printf("Cadastro de até 3 habitantes:\n");

    for(i = 0; i < 3; i++) { 

        printf("Sexo: \n F - Feminino \n M - Masculino \n O - Outro \n ");
        scanf(" %c", &sexo);

        printf("Cor dos olhos (A - Azuis, V - Verdes, C - Castanhos): ");
        scanf(" %c", &corO);

        printf("Cor dos cabelos (L - Louros, C - Castanhos, P - Pretos): ");
        scanf(" %c", &corC);

        printf("Idade: ");
        scanf("%d", &idade);

        if(idade > maior_idade) {
            maior_idade = idade;
            printf("Nova maior idade registrada: %d anos\n", maior_idade);
        }

        if(sexo == 'F' || sexo == 'f') {
            if(idade >= 18 && idade <= 35) {
                if(corO == 'V' || corO == 'v') {
                    if(corC == 'L' || corC == 'l') {
                        contador_fem++;
                        printf("Parabéns! Esta habitante é loira de olhos verdes e tem idade entre 18 e 35.\n");
                    } else {
                        printf("Você é um habitante comum!\n");
                    }
                } else {
                    printf("Você é um habitante comum!\n");
                }
            } else {
                printf("Você é um habitante comum!\n");
            }
        } else {
            printf("Você é um habitante comum!\n");
        }
    }
}
