#include <stdio.h>

int main(){
	
	int b, h, chave, resp;
	float area;
	
	do
	{	
		printf("PROGRAMA PARA CALCULO DE AREA DE FORMAS GEOMETRICAS\n\n");
		printf("1: calcular a area de um triangulo\n");
		printf("2: calcular a area de um quadrado\n");
		printf("3: calcular a area de um retangulo\n");
		printf("4: finalizar a execucao\n");
		printf("\ndigite o numero de acordo com a sua necessidade:");
		scanf("%d", &chave);
		
		if (chave<=4)
		{
			switch(chave)
			{
		 		case 1:
		 			printf("digite o valor da base:");
		 			scanf("%d", &b);
		 			printf("digite o valor da altura:");
		 			scanf("%d", &h);
		 			
		 			area=(b*h)/2;
		 			printf("\narea do triangulo = %f", area);
		 			
					break;
					
				case 2:
		 			printf("digite o valor da base:");
		 			scanf("%d", &b);
		 			
		 			area=(b*b);
		 			printf("\narea do quadrado = %f", area);
		 			
					break;
		 		
				case 3:
		 			printf("digite o valor da base:");
		 			scanf("%d", &b);
		 			printf("digite o valor da altura:");
		 			scanf("%d", &h);
		 			
		 			area=(b*h);
		 			printf("\narea do retangulo = %f", area);
		 			
					break;
				
				case 4:
					return 0;
			}
		}
		else
		{
			printf("fechando programa");
			return 0;
		}
		
	printf("\n\nDigite 1 para fazer outra area ou 2 para sair:");
    scanf("%d", &resp);
    printf("\n\n");
	    
	}while(resp==1);
	
return 0;
}
