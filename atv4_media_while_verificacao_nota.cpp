#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, n3, n4, media;
	char nome[40], resp = 's';
	
	while(resp != 'n'){
		
		printf("\n Informe seu nome: ");
		fflush (stdin);
		gets(nome);
		
		do
		{
		printf("\n Informe a primeira nota: ");
		scanf("%f", &n1);
		if (n1 < 0 or n1 > 10){
			printf("Coloque uma nota entre 0 e 10");
		}
		
		} while (n1 < 0 or n1 > 10);
		
		do
		{
		printf("\n Informe a segunda nota: ");
		scanf("%f", &n2);
		if (n2 < 0 or n2 > 10){
			printf("Coloque uma nota entre 0 e 10");
		}
		
		} while (n2 < 0 or n2 > 10);

		do
		{
		printf("\n Informe a terceira nota: ");
		scanf("%f", &n3);
		if (n3 < 0 or n3 > 10){
			printf("Coloque uma nota entre 0 e 10");
		}
		
		} while (n3 < 0 or n3 > 10);
		
		do
		{
		printf("\n Informe a quarta nota: ");
		scanf("%f", &n4);
		if (n4 < 0 or n4 > 10){
			printf("Coloque uma nota entre 0 e 10");
		}
		
		} while (n4 < 0 or n4 > 10);
		
		media = (n1 + n2 + n3 + n4)/ 4;
		
		printf("\n%s, sua média é: %1.f.\n", nome, media);
		
		do{
            printf("\nDeseja calcular a média de outro aluno? [s/n]: ");
            fflush(stdin);
            scanf(" %c", &resp);
            if(resp != 's' && resp != 'n'){
                printf("Seleção incorreta! Digite apenas 's' ou 'n'.\n");
            }
        }while(resp != 's' && resp != 'n');
    }
		
		system("pause");
}
	
