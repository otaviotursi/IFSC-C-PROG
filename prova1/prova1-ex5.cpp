#include <stdio.h>

int main(){
	
	int saque, nota100, nota50, nota20, nota10, nota5, nota2, nota1, resp;
	int qntN100, qntN50, qntN20, qntN10, qntN5, qntN2, qntN1;

	qntN100 = qntN50 = qntN20 = qntN10 = qntN5 = qntN2 = qntN1 = 100;
 	
	do{
		
		printf("########################\n");
		printf("#                      #\n");
		printf("#   Caixa eletronico   #\n");
		printf("#                      #\n");
		printf("########################\n\n");
		printf("Notas disponiveis: R$100 - %d | R$50 - %d | R$20 - %d | R$10 - %d | R$5 - %d | R$2 - %d | R$1 - %d |\n",qntN100, qntN50, qntN20, qntN10, qntN5, qntN2, qntN1);
		printf("digite o valor a ser sacado:");
		scanf("%d",&saque);

		if (saque>0){
			
			nota100 = saque / 100;
			saque   = saque - 100*nota100;
			qntN100 = qntN100 - nota100;
			
			nota50  = saque / 50;
			saque   = saque - 50*nota50;
			qntN50 = qntN50 - nota50;
			
			nota20  = saque / 20;
			saque   = saque - 20*nota20;
			qntN20 = qntN20 - nota20;
			
			nota10 = saque / 10;
			saque  = saque - 10*nota10;
			qntN10 = qntN10 - nota10;
			
			nota5 = saque / 5;
			saque = saque - 5*nota5;
			qntN5 = qntN5 - nota5;
			
			nota2 = saque / 2;
			saque = saque - 2*nota2;
			qntN2 = qntN2 - nota2;
			
			nota1 = saque / 1;
			saque = saque - nota1;
			qntN1 = qntN1 - nota1;
			
			printf("\nNotas de R$100 a serem sacadas:%d\n", nota100);
			printf("Notas de  R$50 a serem sacadas:%d\n", nota50);
			printf("Notas de  R$20 a serem sacadas:%d\n", nota20);
			printf("Notas de  R$10 a serem sacadas:%d\n", nota10);
			printf("Notas de   R$5 a serem sacadas:%d\n", nota5);
			printf("Notas de   R$2 a serem sacadas:%d\n", nota2);
			printf("Notas de   R$1 a serem sacadas:%d\n", nota1);
		}
		else{
			printf("valor invalido!\n");
		}
		printf("\nvoce quer realizar outra transacao? 1 para sim e 2 para nao:");
		scanf("%d", &resp);
		printf("\n");
	}while(resp == 1);

return 0;
}
