#include <stdio.h>

int main(){
	
	int despesas = 200, ingressos=110, ing, bonus=0;
	float cont=5, lucrobruto, lucroliquido;
	
	do{
		ing = ingressos+bonus;
		lucroliquido = (ing*cont) - despesas;
		lucrobruto = (ing*cont);
		
		printf("preco do ingresso: %.2f | numero de ingressos: %d | lucro bruto: %.2f | lucro liquido: %.2f", cont, ing, lucrobruto, lucroliquido);
		printf("%d\n", bonus);
		bonus+=28;
		cont -=0.5;
	}while(cont>=1);
	
return 0;
}
