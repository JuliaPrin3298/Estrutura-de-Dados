#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, n3, n4, media;
	char nome[40], resp;
	
	while(resp != 'n'){
		
		printf("\n Informe seu nome: ");
		fflush (stdin);
		gets(nome);
		
		printf("\n Informe a primeira nota: ");
		scanf("%f", &n1);
		
		printf("\n Informe a segunda nota: ");
		scanf("%f", &n2);
		
			printf("\n Informe a terceira nota: ");
		scanf("%f", &n3);
		
			printf("\n Informe a quarta nota: ");
		scanf("%f", &n4);
		
		media = (n1 + n2 + n3 + n4)/ 4;
		
		printf("\n%s, sua média é: %1.f.\n", nome, media);
		printf("\nDeseja calcular a média de outro aluno? [s/n]\n");
		fflush(stdin);
		scanf("%c", &resp);
		
		if(resp == 's'){
		
		}else {
		
		}
		
		system("pause");
	}
	
}
