#include <stdio.h>

int main(){
	
	int despesas = 200, ingressos=120, ing, bonus=0;
	float preco=5, lucrobruto, lucroliquido;
	
	do{
		ing = ingressos+bonus;
		lucroliquido = (ing*preco) - despesas;
		lucrobruto = (ing*preco);
		
		printf("preco do ingresso: %.2f | numero de ingressos: %d | lucro bruto: %.2f | lucro liquido: %.2f", preco, ing, lucrobruto, lucroliquido);
		printf("%d\n", bonus);
		bonus+=26;
		preco -=0.5;
	}while(preco>=1);
	
return 0;
}
