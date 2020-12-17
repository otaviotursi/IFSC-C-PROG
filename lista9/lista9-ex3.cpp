#include <stdio.h>

int main(){
	
	int numero;
	
	do
	{
		
		printf("digite um numero:");
		scanf("%d", &numero);
		
		if (numero<0)
			printf("negativo\n");
		else
			printf("positivo\n");
		
	}while(true);
return 0;	
}
