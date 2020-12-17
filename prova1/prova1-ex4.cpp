#include <stdio.h>

int main(){
	
	int mult, mult1, numero, numero1, save, save1, x, vetor[100], soma=0, cont, resp;
	
	do{
		printf("multiplicacao\n");
		printf("precisamos de dois valores para multiplicar\n");
		printf("digite o primeiro numero:");
		scanf("%d", &numero);
		printf("digite o segundo numero:");
		scanf("%d", &numero1);
		
		printf("%d	%d\n", numero, numero1);
		x=0;
		cont=0;
		vetor[x]=0;
		soma=0;
		x=0;
	
		if ((numero%2)==1){
			save = numero1;
			vetor[x] = numero1;
			x++;
			cont++;
		}
	
		mult = numero/2;
		mult1 = numero1*2;
		
		do{
	
			if ((mult%2)==1){
				save1 = mult1;
				vetor[x] = mult1;
				x++;
				cont++;
			}
		
			printf("%d	%d \n", mult, mult1);
			mult = mult/2;
			mult1 = mult1*2;
		
		}while(mult>=1);
	
		x=0;
	
		while(x<cont){
			soma = soma + vetor[x];	
			x++;
		}
	
		printf("resultado da multiplicacao: %d\n", soma);
		printf("\ndeseja realizar outra operacao? 1 para Sim 2 Para nao:");
		scanf("%d", &resp);
		printf("\n");
	}while(resp==1);
	
return 0;
}
