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
		printf("\nDIGITE A OP��O DESEJADA");
		printf("\n 1 - PARA C�LCULO DE RAIZ QUADRADA");
		printf("\n 2 - PARA C�LCULO DE POTENCIALIZA��O");
		printf("\n 3 - PARA C�LCULO DO SENO");
		printf("\n 4 - PARA C�LCULO O LOGARITMO");
		printf("\n 5 - PARA CALCULO DE SOMA");
		printf("\n 6 - PARA CALCULO DE COSSENO");
		printf("\n 7 - PARA CALCULO DE SUBTRA��O");
		printf("\n 0 - SAIR\n");
		scanf("%d", &op);
		printf("\n============================================");
		
		switch(op){
			case 1:{
				printf("\n=====CALCULO DA RAIZ QUADRADA=====");
				printf("\n DIGITE O VALORPARA CALCULO DA RAIZ QUADRADA:  ");
				scanf("%d", &x);
				z = sqrt(x);
				printf("\nA RAIZ QUADRADA DO VALOR %d �: %.2f\n", x, z);
				system("pause");
				break;
			}
			case 2:{
				printf("\n=====CALCULO DE POTENCIALIZA��O=====");
				printf("\nDIGITE O VALOR PARA O CALCULO DA POTENCIA: ");
				scanf("%d", &x);
				printf("\nDIGITE O VALOR DO EXPOENTE: ");
				scanf("%d", &y);
				z = pow(x,y);
				printf("\nA POTENCIA DO VALOR %d COM EXPOENTE %d �: %.2f\n", x, y, z);
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
				printf("\n=====CALCULO DE SUBTRA��O=====");
				printf("\nDIGITE O VALOR PARA O CALCULO: ");
				scanf("%d", &x);
					printf("\nDIGITE O VALOR PARA O CALCULO: ");
				scanf("%d", &y);
				z = x - y;
				printf("\nOS VALORES DE %d - %d TEM A SUBTRA��O: %.2f\n", x, y, z);
				system("pause");
				break;
			}
			
			case 0:{
				printf("\n =====SAIR=====");
				 break;
			}
			default:{ 
				printf("\nDIGITE UMA OP��O V�LIDA\n");
				system("pause");
				break;
			}
		}	
	}while(op != 0);
}
