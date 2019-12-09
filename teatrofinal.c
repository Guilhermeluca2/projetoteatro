
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

	void limpaTela(){
	system("cls");
}	
	
void imprimirPalco(int poltrona[]){
	
		int i = 0;
		int ocupado = 0;
		char *cadeira = malloc(30*sizeof(char));
		
		printf("\n\n\t   ***********************Palco***********************\n\n\n");
		for (i = 1; i < 31; i++) {
		            
		        ocupado = poltrona[i-1];
		        		        
		        if(ocupado > 0) {
		        	cadeira = "[#]";
				} else {
					cadeira  = "[ ]";
				}
				
				if(i % 10 == 0){
					printf("%d-%s\n",i,cadeira);
				} else {
					printf("%d-%s\t",i,cadeira);
				}
	         }	
		}
	
	
int main () 
{
	int i = 0;
	
	char peca [7] = "Hamlet";
	char horario [6] = {49, 57, 58, 48, 48};
	int dia;
		
	
	int idade;
	char prof, est, estPubli;
	
	
	int polt = 0, quantPoltronas = 30;
	int poltrona[30] = {0,0,0,0,0,0,0,0,0,0,
						0,0,0,0,0,0,0,0,0,0,
						0,0,0,0,0,0,0,0,0,0};
		        		
	int contTicketsCheio = 0;
	int contTicketsMeia = 0;
	int contTicketsGratuito = 0;
	int contTicketsTotal = 0;
	float valorTicket, contReceita = 0;	
	
	int sair = 0;	 
        					
	printf("\n\t\t\tTeatro Odisseu\n"
		   "\tSistema de Bilhetagem Eletronica do Teatro Odisseu\n\n"  
			"Seja bem-vindo(a) ao sistema de vendas de ingressos do Teatro Odisseu.\n"
			"Leia atentamente as instrucoes abaixo para obter \na melhor experiencia na venda dos ingressos.\n\n"
			"*******INFORMACOES IMPORTANTES*******\n\n"
			"- Neste mes de novembro, estamos recebendo a companhia teatral Tetris,\n"
			" que fara apresentacoes da peca teatral Hamlet, todos os dias do mes, sempre as 19:00.\n\n"
			"- O ingresso individual custa R$ 30,60.\n\n"
			"- Tem direito a um desconto de 50 por cento no valor do ingresso individual:\n"
			" *Criancas de 2 a 12 anos;\n" 
			" *Adultos a partir de 60 anos;\n"
			" *Professores da rede publica de ensino; e\n"
			" *Estudantes.\n"
			"ATENCAO: desconto nao cumulativo.\n\n"
			"- Criancas carentes da rede publica de ensino,\n"
			"as tercas-feiras, tem direito a um desconto de\n" 
			"100 por cento no valor do ingresso cheio.\n"
			"ATENCAO: para efeito de aplicacao do desconto integral supracitado,\n"
			"sao consideradas criancas, meninos ou meninas, com ate 12 anos.\n\n"
			"Boas vendas!\n\n");
			
			system ("pause");
			limpaTela();
			
			printf("\n\t\t\t\t\t\tNovembro 2019\n\n"
			   "\t  Segunda\tTerca\t\tQuarta\t\tQuinta\t\tSexta\t\tSabado\t\tDomingo\n"
			   "\t  \t\t\t\t\t\t\t\t1\t\t2\t\t3\n"
			   "\t  4\t\t5\t\t6\t\t7\t\t8\t\t9\t\t10\n"
			   "\t  11\t\t12\t\t13\t\t14\t\t15\t\t16\t\t17\n"
			   "\t  18\t\t19\t\t20\t\t21\t\t22\t\t23\t\t24\n"
			   "\t  25\t\t26\t\t27\t\t28\t\t29\t\t30\n");
	
		
	do {
		
		printf("\n\nQue dia e hoje?\nEscolha um dia entre (1) e (30): ");
		scanf("%d",&dia);
		fflush(stdin);
		
		switch (dia) {
			case 3:
			case 10:
			case 17:
			case 24:
				printf("\nVoce selecionou domingo, dia %d.\n\n",dia);	
				break;
		
			case 4:
			case 11:
			case 18:
			case 25:
				printf("\nVoce selecionou segunda-feira, dia %d.\n\n",dia);	
				break;
			
			case 5:
			case 12:
			case 19:
			case 26:
				printf("\nVoce selecionou terca-feira, dia %d.\n\n",dia);	
				break;
			
			case 6:
			case 13:
			case 20:
			case 27:
				printf("\nVoce selecionou quarta-feira, dia %d.\n\n",dia);	
				break;
			
			case 7:
			case 14:
			case 21:
			case 28:
				printf("\nVoce selecionou quinta-feira, dia %d.\n\n",dia);	
				break;
			
			case 1:
			case 8:
			case 15:
			case 22:
			case 29:
				printf("\nVoce selecionou sexta-feira, dia %d.\n\n",dia);	
				break;
			
			case 2:	
			case 9:
			case 16:
			case 23:
			case 30:
				printf("\nVoce selecionou sabado, dia %d.\n\n",dia);	
				break;
				
			default:
				printf("\nDia inexistente.\n");	
				break;			
		}
		
		if(dia >=1 && dia <= 30){
			sair = 1;
		}
	
 	} while (sair != 1);
	 		 
	system ("pause");
	limpaTela();
			
			
	do {				 		
			printf("\nAtualmente estamos com a peca %s em cartaz.\n",peca);
			printf("As apresentacoes comecam as %s.\n",horario);	
			
			
    		imprimirPalco(poltrona);
				
    		
			int sair = 0;
    		do {
    				printf("\nEscolha uma poltrona: ");
    				scanf ("%d",&polt);
    			

					if(polt >= 1 && polt < 31  ){
						if(poltrona[polt-1] == 0){
							poltrona[polt-1] = 1;
							sair = 1;
						} else if(poltrona[polt-1] > 0){
							printf("\nPoltrona ocupada.");							
						}
					}  
								
			}while(sair == 0);
				
			imprimirPalco(poltrona);
			
			system ("pause");
			limpaTela();


	printf("\nPreencha as informacoes do comprador.\n");	
		
			do {
		
				printf ("\nInforme a idade (em anos): ");
				scanf ("%d",&idade);
				fflush(stdin);
							
				if (idade == 0 || idade == 1){
				printf("\nProibida a entrada para menores de 2 anos.");
							
				}else if (idade< 0 || idade > 122) {
					printf("\nEntrada invalida!\nDigite uma idade valida.\n");
				}
			
			} while (idade < 2 || idade > 122);	
	
	
			do {
	
				printf ("\nE professor(a) da rede publica de ensino? s/n? ");
				prof = getchar();
				fflush(stdin);
				
					if (prof != 's' && prof != 'n')
						printf("\nEntrada invalida!\nDigite 's' ou 'n'.\n");
					
			} while (prof != 's' && prof != 'n');
	
	
			do {
		
				printf ("\nE estudante? s/n? ");
				est = getchar();
				fflush(stdin);
				
					if (est != 's' && est != 'n')
						printf("\nEntrada invalida!\nDigite 's' ou 'n'.\n");
					
			} while (est != 's' && est != 'n');
	
	
	
		if ((idade >= 2 && idade <= 12) && est == 's' && (dia == 5 || dia == 12 || dia == 19 || dia == 26))  {
	
			do {
	
					printf ("\nE estudante carente da rede publica de ensino? s/n? "); 
					estPubli = getchar();
					fflush(stdin);
						
					if (estPubli != 's' && estPubli != 'n') 
						printf("\nEntrada invalida!\nDigite 's' ou 'n'.\n");
	
				} while (estPubli != 's' && estPubli != 'n');
			}
			
			
		 if (idade > 12 && idade < 60 && prof == 'n' && est == 'n') {
			valorTicket = 30.60;
			contTicketsCheio = (contTicketsCheio + 1);
			contTicketsTotal = (contTicketsTotal + 1);
			contReceita = (contReceita + valorTicket);
			printf ("\nO valor do ingresso e R$ %2.2f.\n\n", valorTicket);
		
		} else if (estPubli == 's') {
			valorTicket = 0.00;
			contTicketsGratuito = (contTicketsGratuito + 1);
			contTicketsTotal = (contTicketsTotal + 1);
			contReceita = (contReceita + valorTicket);
			printf ("\nO valor do ingresso e R$ %2.2f.\n\n", valorTicket);
				
		} else {
			valorTicket = 15.30;
			contTicketsMeia = (contTicketsMeia + 1);
			contTicketsTotal = (contTicketsTotal + 1);
			contReceita = (contReceita + valorTicket);
			printf ("\nO valor do ingresso e R$ %2.2f.\n\n", valorTicket);
		} 
	
		system ("pause");
		limpaTela();
	
	printf ("\n\n----------------------------------------------------------\n");
		
	printf ("\t************Ingresso Individual************\n\n");

	printf ("Voce comprou um ingresso para assistir a peca %s,\n",peca);
		
	printf("no dia %d de novembro de 2019, ",dia);	
	
	if (dia == 3 || dia == 10 || dia == 17 || dia == 24) 
		printf("domingo, ");
		
	else if (dia == 4 || dia == 11 || dia == 18 || dia == 25)
		printf("segunda-feira, ");
			
	else if (dia == 5 || dia == 12 || dia == 19 || dia == 26)
		printf("terca-feira, ");
			
	else if (dia == 6 || dia == 13 || dia == 20 || dia == 27)
		printf("quarta-feira, ");

	else if (dia == 7 || dia == 14 || dia == 21 || dia == 28)
		printf("quinta-feira, ");
	
	else if (dia == 8 || dia == 15 || dia == 22 || dia == 29)
		printf("sexta-feira, ");

	else
		printf("sabado, ");

		printf("as %s.\n", horario);
	
	
	for (i = 0; i <= quantPoltronas; i++) {
		printf("A poltrona escolhida foi a de numero %d.", polt);
		quantPoltronas--;
		estPubli = "";
		break;	
	}
	
	printf ("\n\n----------------------------------------------------------\n");		
	system("pause");
	limpaTela();	

		
		
		int resposta = quantPoltronas;		
		printf("\n\nDeseja vender mais ingressos?\n\n1 - Continuar\n9 - Sair.\n\nEscolha: ");
		scanf("%d",&resposta);
		limpaTela();
		
		if(resposta == 9){
			quantPoltronas = 0;
		}
		
		} while (quantPoltronas != 0);
		
		if (contTicketsTotal == 30){
				printf("Todos os ingressos para a sessao de hoje foram vendidos. As vendas estao encerradas.");	}
		
		printf("\nForam vendidos %d ingressos. Sendo:", contTicketsTotal);
		printf("\n- %d inteiros;",contTicketsCheio);
		printf("\n- %d meia-entradas; e",contTicketsMeia);
		printf("\n- %d gratuitos.",contTicketsGratuito);
		printf("\nO valor total arrecadado com o valor dos ingressos foi de R$ %2.2f.\n\n", contReceita);
	
	system ("pause");
	return 0;
}

