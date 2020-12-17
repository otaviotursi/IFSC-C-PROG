#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int inicio, fim, horajogo;
	
	printf("programa para calculo de horas de um jogo\n");
	
	printf("digite a hora que o jogo comecou:");
	scanf("%d", &inicio);
	printf("digite a hora que o jogo acabou:");
	scanf("%d", &fim);
	
	horajogo = fim - inicio;
	if (horajogo == 24)
	{
		printf("o tempo de jogo e igual a 24 horas");
	}
	else if (horajogo < 24)
	{
		printf("o tempo de jogo e de %d horas", horajogo);
	}
	return 0;
}
