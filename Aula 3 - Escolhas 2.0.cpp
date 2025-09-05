#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int op, x, y;
	float z;
	
	
	do{
		system("cls");
		printf("\n===========================================");
		printf("\nDIGITE A OPÇÃO DESEJADA");
		printf("\n 1 - PARA CÁLCULO DE RAIZ QUADRADA");
		printf("\n 2 - PARA CÁLCULO DE POTENCIALIZAÇÃO");
		printf("\n 3 - PARA CÁLCULO DO SENO");
		printf("\n 4 - PARA CÁLCULO O LOGARITMO");
		printf("\n 5 - PARA CALCULO DE SOMA");
		printf("\n 6 - PARA CALCULO DE COSSENO");
		printf("\n 7 - PARA CALCULO DE SUBTRAÇÃO");
		printf("\n 0 - SAIR\n");
		scanf("%d", &op);
		printf("\n============================================");
		
		switch(op){
			case 1:{
				printf("\n=====CALCULO DA RAIZ QUADRADA=====");
				printf("\n DIGITE O VALORPARA CALCULO DA RAIZ QUADRADA:  ");
				scanf("%d", &x);
				z = sqrt(x);
				printf("\nA RAIZ QUADRADA DO VALOR %d É: %.2f\n", x, z);
				system("pause");
				break;
			}
			case 2:{
				printf("\n=====CALCULO DE POTENCIALIZAÇÃO=====");
				printf("\nDIGITE O VALOR PARA O CALCULO DA POTENCIA: ");
				scanf("%d", &x);
				printf("\nDIGITE O VALOR DO EXPOENTE: ");
				scanf("%d", &y);
				z = pow(x,y);
				printf("\nA POTENCIA DO VALOR %d COM EXPOENTE %d É: %.2f\n", x, y, z);
				system("pause");
				break;
			}
			case 3:{
				printf("\n=====CALCULO DO SENO=====");
				printf("\nDIGITE O ANGULO PARA O CALCULO DO SENO: ");
				scanf("%d", &x);
				z = sin(x);
				printf("\n O ANGULO %d TEM O SENO DE: %.2f\n", x, z);
				system("pause");
				break;
			}
			case 4:{
				printf("\n=====CALCULO O LOGARITMO=====");
				printf("\nDIGITE O VALOR PARA O CALCULO DO LOGARITMO: ");
				scanf("%d", &x);
				z = log(x);
				printf("\n O VALOR DO %d TEM O LOGARITMO: %.2f\n", x, z);
				system("pause");
				break;
			}
			case 5:{
				printf("\n=====CALCULO DE SOMA=====");
				printf("\nDIGITE O VALOR PARA O CALCULO: ");
				scanf("%d", &x);
					printf("\nDIGITE O VALOR PARA O CALCULO: ");
				scanf("%d", &y);
				z = x + y;
				printf("\nOS VALORES DE %d + %d TEM A SOMA: %.2f\n", x, y, z);
				system("pause");
				break;
			}
			case 6:{
				printf("\n=====CALCULO DO COSSENO=====");
				printf("\nDIGITE O ANGULO PARA O CALCULO DO COSSENO: ");
				scanf("%d", &x);
				z = cos(x);
				printf("\n O ANGULO %d TEM O COSSENO DE: %.2f\n", x, z);
				system("pause");
				break;
			}
			case 7:{
				printf("\n=====CALCULO DE SUBTRAÇÃO=====");
				printf("\nDIGITE O VALOR PARA O CALCULO: ");
				scanf("%d", &x);
					printf("\nDIGITE O VALOR PARA O CALCULO: ");
				scanf("%d", &y);
				z = x - y;
				printf("\nOS VALORES DE %d - %d TEM A SUBTRAÇÃO: %.2f\n", x, y, z);
				system("pause");
				break;
			}
			
			case 0:{
				printf("\n =====SAIR=====");
				 break;
			}
			default:{ 
				printf("\nDIGITE UMA OPÇÃO VÁLIDA\n");
				system("pause");
				break;
			}
		}	
	}while(op != 0);
}
