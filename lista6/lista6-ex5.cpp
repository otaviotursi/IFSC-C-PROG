#include <stdio.h>

int main(){
	
	int lanche, bebida, sobremesa;
	float salgado, tomar, acompanhamento, total;

	menu:
	
	printf( "_______________________________________\n"
			"|_______________MENU__________________|\n"
			"|codigo |    descricao    | preco (R$)|\n"
			"|   1   |    hamburger    |   4,50    |\n"
			"|   2   |   chessburger   |   5,50    |\n"
			"|   3   | cachorro quente |   4,00    |\n"
			"|   4   |    sanduiche    |   3,50    |\n"
			"|   5   |  refrigerante   |   1,00    |\n"
			"|   6   | suco de laranja |   2,00    |\n"
			"|   7   |    milk shake   |   1,50    |\n"
			"|   8   |     sundae      |   3,00    |\n"
			"|   9   |    casquinha    |   1,00    |\n"
			"|_______|_________________|___________|\n");
			

	// colocar valores que usuario quer
	printf("\ndigite o numero do lanche do cliente: ");
	scanf("%d", &lanche);
	printf("digite o numero do bebida do cliente: ");
	scanf("%d", &bebida);
	printf("digite o numero da sobremesa do cliente: ");
	scanf("%d", &sobremesa);
	
	// lanches
	if (lanche == 1)
	{
		salgado = 4.5;
		printf("\nhamburguer preco %f reais\n", salgado);
		
	}
	else if (lanche == 2)
	{
		salgado = 5.5;
		printf("\nchessburguer preco %f reais\n", salgado);
	}
	
	else if (lanche == 3)
	{
		salgado = 4.0;
		printf("\ncachorro quente preco %f reais\n", salgado);
	}
		
	else if (lanche == 4)
	{
		salgado = 3.5;
		printf("\nsanduiche preco %f reais\n", salgado);
	}
	else
	{
		printf("valor do lanche indeferido, refaca o pedido\n");
	}
		
	// bebida
	if (bebida == 5)
	{
		tomar = 1;
		printf("refrigerante preco %f reais\n", tomar);	
	}
	
	else if (bebida == 6)
	{
		tomar = 2;
		printf("suco de laranja preco %f reais\n", tomar);
	}
	else
	{
		printf("valor da bebida indeferido, refaca o pedido\n");
	}
	
	// sobremesa
	if (sobremesa == 7)
	{
		acompanhamento = 1.5;
		printf("milkshake preco %f reais\n", acompanhamento);	
	}
	
	else if (sobremesa == 8)
	{
		acompanhamento = 3.0;
		printf("sundae preco %f reais\n", acompanhamento);
	}
	
	else if (sobremesa == 9)
	{
		acompanhamento = 1.0;
		printf("casquinha preco %f reais\n", acompanhamento);
	}
	
	else
	{
		printf("valor da sobremesa indeferido, refaca o pedido\n");
	}
	
	total = salgado+tomar+acompanhamento;
	printf("\npreco total: %f reais", total);
}
