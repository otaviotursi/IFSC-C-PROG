#include <stdio.h>

int main()
{
	float valor, desconto, valdesc;
	int resp;
	do{
		printf("##########################################################################\n");
		printf("##                                                                      ##\n");
		printf("##  Se o cliente gastar menos que R$500.00 tera 15 porcento de desconto ##\n");
		printf("##  Se o cliente gastar mais que R$500.00 tera 20 porcento de desconto  ##\n");
		printf("##                                                                      ##\n");
		printf("##########################################################################");
		
		printf("\n\ndigite o valor gasto pelo cliente:");
		scanf("%f", &valor);
		
		if (valor<=500)
		{
			desconto=(valor/100)*15;
			valdesc=valor-desconto;
			printf("desconto: %.2freais\n", desconto);	
			printf("valor total com desconto %.2freais", valdesc);
		}
		else
		{
			desconto=(valor/100)*20;
			valdesc=valor-desconto;
			printf("desconto: %.2freais\n", desconto);	
			printf("valor total com desconto %.2freais", valdesc);
		}
		
	    printf("\n\nDigite 1 para calcular novo desconto ou 2 para sair:");
	    scanf("%d", &resp);
	    printf("\n\n\n");
	    
	}while(resp==1);
return 0;		
}
