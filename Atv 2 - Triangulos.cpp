#include<stdio.h> //biblioteca 
#include<stdlib.h> //pause no programa
#include<locale.h> //idioma


//samuel.santos101@fatec.sp.gov.br

main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int l1, l2, l3;
	
	printf("Informe o 1° lado: ");
	scanf("%d", &l1);
	
	printf("Informe o 2° lado: ");
	scanf("%d", &l2);
	
	printf("Informe o 3° lado: ");
	scanf("%d", &l3);
	
	if((l1>l2 + l3) or (l2> l1 + l3) or (l3> l1 + l2)){
		printf("Os lados informados não formam um triângulo!\n");
	}else{
		if((l1 == l2) and (l2 == l3)){
			printf("Triângulo Equilátero!\n");
		}else{
			if((l1 != l2) and (l2 != l3) and (l1 != l3)){
				printf("Triângulo Escaleno\n");
			}else{
				printf("Triângulo Isósceles!\n");
			}
		}
	}

}
