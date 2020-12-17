#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	
	float HeT, premio, gratificacao, flt;
	char nome[20];
	printf("programa para calculo de premio da pascoa\n");
	
	// nome funcionario - nome
	printf("digite o nome do funcionario: ");
	scanf("%s", &nome);
	
	// Hora Extras Trabalhas - HeT
	printf("digite quantas horas extras foram trabalhadas: ");
	scanf("%f", &HeT);
	
	// Quantidade de falta - flt
	printf("digite a quantidade de faltas tidas: ");
	scanf("%f", &flt);
	
	//conta 
	premio = HeT - (flt*(2/3));
	
	//Gratificação

	if (premio <= 10)
	{
		gratificacao = 200.00;
	}

	else if (premio <= 20)
	{
		gratificacao = 400.00;	
	}
	
	else if(premio <= 30)
	{
		gratificacao = 600.00;
	}	
	
	else if(premio <= 40) 
	{
		gratificacao = 800.00;
	}
	
	else if (premio > 40)
	{
		gratificacao = 1000.00;
	}
	
	// anuncio
	
	printf("\no funcionario %s, ira receber %f reais de bonus", nome, gratificacao);
	
	return 0;
}
