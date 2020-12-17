#include <stdio.h>

int main(){
	
	int diaria, servico, cont;
	float valor, valorserv;
	do{
		printf("CALCULAR PRECO DE DIARIAS\n\n");
		printf("1. encerrar a conta de um hospede\n");
		printf("2. verificar numero de contas encerradas\n");
		printf("3. finalizar a execucao\n\n");
		
		printf("digite o valor correspondente necessario:");
		scanf("%d", &servico);
		
		if (servico<=3){
			switch(servico){
				cont=0;
				case 1:
					printf("\ndigite quantas diarias o cliente ficou:");
					scanf("%d", &diaria);
					
					if (diaria < 15){
						valor = diaria*50;
						valorserv= diaria*7.5;
						printf("valor total %.2freais\n\n", valor+valorserv);
					}
					else if (diaria = 15){	
						valor = diaria*50;
						valorserv= diaria*6.5;
						printf("valor total %.2freais\n\n", valor+valorserv);
					}
					else{	
						valor = diaria*50;
						valorserv= diaria*5;
						printf("valor total %.2freais\n\n", valor+valorserv);
					}		
					cont++;
					break;
					
				case 2:
					printf("numero de contas ja encerradas %d\n\n", cont);
					break;
				
				case 3:
					return 0;
			}
		}
		else{
			printf("valor nao valido, fechando programa!");		
		}	
	}while(true);			    
	    
	
return 0;	
}
