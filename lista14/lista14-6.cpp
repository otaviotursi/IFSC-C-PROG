/*

6. Faça um algoritmo que calcule a média dos números primos entre 92 e 1478.
Defina uma função para retornar VERDADEIRO, se o parâmetro for um número primo, e FALSO, caso contrário. 

*/
#include <stdio.h>

int numeroPrimo(int numero, int maximo){
	
	int produto, primo, div, n=0;
	
	while(numero<=maximo){
		div=0;
		primo=2;
	
		while (primo<numero){
			if ((numero%primo)==0){
				div++;
			}
			primo++;	
		}
		
		if (div==0){
//			printf("%d eh primo\n", numero);
			n++;
			return true;
		} else {
			return false;
		}
		numero++;
	
		
	}
	
}

int main(){
	
	int numero=92, numero1=0, maximo=1478, media, cont=0;
	bool primo;
	
	for (numero; numero<maximo; numero++){
		primo = numeroPrimo(numero, maximo);
		if (primo) {
			
			printf("numero: %d, verdadeiro\n", numero);
			cont++;
			
//			printf("contador %d\n", cont);
			numero1= numero1+numero;
//			printf("primo %d\n", numero1);
			media = numero1/cont;

		} else {
			printf("numero: %d, falso\n", numero);
		}
	}
	
	printf("media dos numeros primos: %d", media);
	
	return 0;	
}
