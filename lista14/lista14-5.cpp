/*
5. Faça um algoritmo que leia n pares de valores (x, y) e calcule, para cada par de valor, x^y.
Defina uma função para efetuar o cálculo solicitado, sem utilizar nenhuma função pré-definida do C.
Considere que y é um número inteiro. 
*/

#include <stdio.h>

int potencia(int numero, int expoente){
	int i, numero1=1;
	
//	printf("%d, %d\n", numero, expoente);
	
		
	for (i = 0; expoente>i; i++){
		numero1 = numero1 * numero;
		printf("potencia: %d %d\n", numero1, numero);
	}
	
	return numero1;
}

int main(){
	
	int resultadoPotencia, numero, expoente;
	
	printf("programa para calcular numeros com potecia\n");
	
	printf("digite um numero: ");
	scanf("%d", &numero);
	
	printf("digite a potencia: ");
	scanf("%d", &expoente);
	
	resultadoPotencia = potencia(numero, expoente);
	printf("resultado potenciacao: %d", resultadoPotencia);
}
