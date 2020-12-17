#include <stdio.h>

int main(){
	
	float indice;
	int geral;
	
	printf("digite o numero correspondente a situacao da industria\n");
	printf("1 - listaA\n");
	printf("2 - listaB\n");
	printf("3 - listaC\n");
	printf("numero: ");
	scanf("%d", &geral);
	
	switch(geral) {
		
		case 1:
		printf("\ndigite o indice de poluicao: ");
		scanf("%f", &indice);
		
		if (indice > 0.25)
			printf("a industria deve atingir os criterios de poluicao de 0.05 a 0.25, portanto deve ser interditada.");
		else
			printf("valor de poluicao e adequado");
		break;
		
		case 2:
		printf("\ndigite o indice de poluicao: ");
		scanf("%f", &indice);
		
		if (indice > 0.40)
			printf("a industria deve atingir os criterios de poluicao de 0.05 a 0.25, portanto deve ser interditada.");
		else
			printf("valor de poluicao e adequado");
		break;
		
		case 3:
		printf("\ndigite o indice de poluicao: ");
		scanf("%f", &indice);
		
		if (indice > 0.50)
			printf("a industria deve atingir os criterios de poluicao de 0.05 a 0.25, portanto deve ser interditada.");
		else
			printf("valor de poluicao e adequado");
		break;
	}
	return 0;
}
