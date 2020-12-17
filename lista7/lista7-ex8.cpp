#include <stdio.h>

int main(){
	
	int mesNumero, resp;


	do{
		
		printf("Meses do ano, digite um numero, e diremos qual mes eh! \n");
	
		printf("digite aqui: ");
		scanf("%d", &mesNumero);
		printf("\n");
		if (mesNumero == 1){
			printf("Janeiro");
		}
		else if (mesNumero == 2){
			printf("Fevereiro");
		}
		else if (mesNumero == 3){
			printf("Março");
		}
		else if (mesNumero == 4){
			printf("Abril");
		}
		else if (mesNumero == 5){
			printf("Maio");
		}
		else if (mesNumero == 6){
			printf("Junho");
		}
		else if (mesNumero == 7){
			printf("Julho");
		}
		else if (mesNumero == 8){
			printf("Agosto");
		}
		else if (mesNumero == 9){
			printf("Setembro");
		}
		else if (mesNumero == 10){
			printf("Outubro");
		}
		else if (mesNumero == 11){
			printf("Novembro");
		}
		else if (mesNumero == 12){
			printf("Dezembro");
		}
		else{
			printf("nao eh um valor valido! :(");
		}
		
		printf("\n\ndeseja realizar outra operacao? 1 para Sim 2 Para Nao:");
		scanf("%d", &resp);
		printf("\n");
	}while(resp==1);
	

return 0;
}
