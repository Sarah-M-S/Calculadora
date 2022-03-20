#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main(){
	int operacao, tryagain;
	float num1, num2, soma, mult, sub, div;
	char opc;
	
	setlocale(LC_ALL, "");
	printf("\tCALCULADORA\n");
	printf("\nEssa calculadora realiza as quatro operações básicas da matemática entre dois números.\n\n\n");
	
	menu:
	printf("Digite o número correspondente a operação que deseja realizar:\n\n");
	printf("[+] - 1\n[-] - 2\n[*] - 3\n[/] - 4\n\nDigite aqui: ");
	scanf(" %d", &operacao);


	if(operacao>4||operacao<1){
		printf("\nVocê digitou um número fora da lista.\nDigite 5 para tentar novamente ou 6 para observar um lindo desenho enquanto o programa fecha\n");
		scanf(" %d", &tryagain);
		switch(tryagain){
			case 5 : 
			system("cls");
			goto menu;break;
			case 6 : 
					printf(" --------¦¦¦¦¦¦¦------------¦¦¦¦¦¦\n");
					printf("------¦¦¦¦¦¦¦¦¦¦¦--------¦¦¦¦¦¦¦¦¦¦\n");
					printf("----¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦----¦¦¦¦¦¦¦¦¦¦¦¦¦¦\n");
					printf("---¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦\n");
					printf("--¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦\n");
					printf("--¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦\n");
					printf("-¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦\n");
					printf("¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦\n");
					printf("¦¦¦¦¦¦¦¦¯¯¯¯¯¦¦¦__¦¦¦¦¦¦___¦¦¯¯¯¯¯¦¦¦¦¦¦¦\n");
					printf("¦¦¦¦¦¦¦¦¦_¯¦¦¦¦¯¦¦¦_¦¦_¦¦¦¦¯¦¦¦¦_¦¦¦¦¦¦¦¦\n");
					printf("¦¦¦¦¦¦¦¦¦¯________¯¦¦¦¦¯________¯¦¦¦¦¦¦¦¦\n");
					printf("-¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦\n");
					printf("--¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦\n");
					printf("----¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦\n");
					printf("-----¦¦¦¦¦¦¦¦¦¦¦¦_________¦¦¦¦¦¦¦¦¦¦\n");
					printf("------¦¦¦¦¦¦¦¦¦_¯¯¯¯¯¯¯¯¯¯¯_¦¦¦¦¦¦¦\n");
					printf("-------¦¦¦¦¦¦¦¯¦¦¦¦¦¦¦¦¦¦¦¦¦¯¦¦¦¦¦\n");
					printf("----------¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦\n");
					printf("-----------¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦\n");
					printf("-------------¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦\n");
					printf("---------------¦¦¦¦¦¦¦¦¦¦¦¦\n");
					printf("----------------¦¦¦¦¦¦¦¦¦¦\n");
					printf("------------------¦¦¦¦¦¦\n");
					printf("-------------------¦¦¦¦\n");
					printf("--------------------¦¦\n");

		}
				
	}
	else{
		switch(operacao){
			case 1: printf("Digite o primeiro número: ");
			scanf(" %f", &num1);
			printf("Digite o segundo número: ");
			scanf(" %f", &num2);
			soma = num1 + num2;
			printf("%2.f + %2.f = %2.f", num1, num2, soma);
						printf("\n\nDeseja continuar?\n\nS ou N: ");
			scanf(" %c", &opc);
				if(tolower(opc) == 's'){
					system("cls");
					goto menu;
				}else
				if(tolower(opc) == 'n'){
					printf("\nObg por usar essa calculadora!");
				}else
				if(opc!='s'||opc!='S'||opc!='n'||opc!='N'){				
				}   
					printf("Parece que você não digitou uma opção válida.\nAgora a calculadora irá fechar, obg!");
					break;
				
			case 2: printf("Digite o primeiro número: ");
			scanf(" %f", &num1);
			printf("Digite o segundo número: ");
			scanf(" %f", &num2);
			sub = num1 - num2;
			printf("%2.f - %2.f = %2.f", num1, num2, sub);
						printf("\n\nDeseja continuar?\n\nS ou N: ");
			scanf(" %c", &opc);
				if(tolower(opc) == 's'){
					system("cls");
					goto menu;
				}else
				if(tolower(opc) == 'n'){
					printf("\nObg por usar essa calculadora!");
				}else
				if(opc!='s'||opc!='S'||opc!='n'||opc!='N'){
					printf("Parece que você não digitou uma opção válida.\nAgora a calculadora irá fechar, obg!");
					break;
				}
		
			case 3: printf("Digite o primeiro número: ");
			scanf(" %f", &num1);
			printf("Digite o segundo número: ");
			scanf(" %f", &num2);
			mult = num1 * num2;
			printf("%2.f * %2.f = %2.f", num1, num2, mult);
						printf("\n\nDeseja continuar?\n\nS ou N: ");
			scanf(" %c", &opc);
				if(tolower(opc)=='s'){
					system("cls");
					goto menu;
				}else
				if(tolower(opc)=='n'){
					printf("\nObg por usar essa calculadora!");
				}else
				if(opc!='s'||opc!='S'||opc!='n'||opc!='N'){
					printf("Parece que você não digitou uma opção válida.\nAgora a calculadora irá fechar, obg!");
					break;
				}
				
			case 4: printf("Digite o primeiro número: ");
			scanf(" %f", &num1);
			printf("Digite o segundo número: ");
			scanf(" %f", &num2);
			div = num1 / num2;
			printf("%2.f / %2.f = %.2f\n", num1, num2, div);
			printf("\n\nDeseja continuar?\n\nS ou N: ");
			scanf(" %c", &opc);
				if(tolower(opc)=='s'){
					system("cls");
					goto menu;
				}else
				if(tolower(opc)=='n'){
					printf("\nObg por usar essa calculadora!");
				}else
				if(opc!='s'||opc!='S'||opc!='n'||opc!='N'){
					printf("Parece que você não digitou uma opção válida.\nAgora a calculadora irá fechar, obg!");
					break;
				}
	
	}
	}
	
	
}
