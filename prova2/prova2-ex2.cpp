/*
(4 pontos) O n�mero 3025 tem a seguinte caracter�stica

30 + 25 = 55 55� = 3025

Fa�a um algoritmo que imprima todos os n�meros de quatro algarismos que apresentam tal caracter�stica.

*/


#include <stdio.h>

int potencia(int numero){
	int i, numero1=1, expoente=2;
//	printf("%d, %d\n", numero, expoente);

	for (i = 0; expoente>i; i++){
		numero1 = numero1 * numero;
//		printf("potencia: %d %d\n", numero1, numero);
	}
	
	return numero1;
}

int main(){
	int i, primeiros2, ultimos2, soma, result;
	printf("programa para calculo de numeros de 4 algarimos com base nos originais\n");
	for (i=1000; i<=9999; i++){
		
		primeiros2 = i/100;
		ultimos2 = i%100;
		
		soma = primeiros2+ultimos2;
		result = potencia(soma);
//		printf("%d\n", i);
		if (result == i){
//			printf("VALOR DE I: %d\n", i);
			printf("numero %d = primeiros %d + ultimos %d = %d*%d =  resultado %d\n", i, primeiros2, ultimos2, soma, soma, result);
			printf("\n");

		}
	}
}
