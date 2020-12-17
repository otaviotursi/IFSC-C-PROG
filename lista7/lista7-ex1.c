#include <stdio.h>

int main(){

	char resp, whileResp='S';
	int base, altura, calcFormula;

	do{
		
		printf("Digite T para calcular a area de um triangulo\n");
		printf("Digite Q para calcular a area de um qudrado\n");
		printf("Digite R para calcular a area de um retangulo\n\n");
		printf("Digite aqui: ");
		scanf("%c", &resp);
		
	    printf("\nVoce digitou a letra: %c \n\n", resp);
		
		if (resp=='T' || resp=='t'){
			printf("Digite a base: ");
			scanf("%d", &base);
			printf("Digite a altura: ");
			scanf("%d", &altura);
			
			calcFormula = (base * altura)/2;
			printf("area do triangulo: %d\n", calcFormula);
		}
		
		else if(resp=='Q' || resp=='q'){
			printf("Digite o lado do quadrado: ");
			scanf("%d", &base);
			calcFormula = (base * base);
			printf("area do quadrado: %d\n", calcFormula);
		}
		
		else if(resp=='R' || resp=='r'){
			printf("Digite a base: ");
			scanf("%d", &base);
			printf("Digite a altura: ");
			scanf("%d", &altura);
			
			calcFormula = (base * altura);
			printf("area do retagulo: %d\n", calcFormula);
		}
		
		else{
			printf("letra invalida, digite uma valida.");
		}
		
		fflush(stdin);
		printf("\ndeseja realizar outra operacao? S para Sim | N Para nao: ");
		scanf("%c", &whileResp);
		printf("\n");
		fflush(stdin);
		
	}while(whileResp=='s' || whileResp=='S');
	

	return 0;
}
