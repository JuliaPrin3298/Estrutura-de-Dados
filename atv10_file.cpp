// fprintf() = armazenar
//fopen() = abre o arquivo
// fgtes() = consultar
// w = escreve 
// r = read
// a = add

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

char cadastro(){
	
	char nome[100];	
	
	printf("Digite seu nome: ");
	fflush(stdin);
	gets(nome);
	
	return nome;
	
}

main(){
	
	FILE *arquivo;
	char nome;
	
	arquivo = fopen("cliente.txt", "w");
	if (arquivo == NULL){
		printf("Erro ao abrir o arquivo.\n");
	}else{
		printf("Abrindo formulario de cadastro...\n");
	}
	
	fprintf(cadastro(nome));
	
}


