/*
Faça um algoritmo que calcule os sucessivos valores de "E" usando a série abaixo. 
O algoritmo deve escrever o 1o termo da série,
a soma dos dois primeiros termos da série,
a soma dos três primeiros da série e assim por diante.
 E = 1 + 1 + 1 + 1 + 1. + ... + 1 .
 1! 2! 3! 4! (n -1)! 
*/

#include <stdio.h>

int fatorial(int valor){
	
	int  n;
		
	for(n=1; valor>1; valor=valor-1){
		n = valor*n;
	}
//	printf("N: %d\n", n);
	return n;
	
}

int valorE(int n){
	int indoFat, i, E, fat;	
	
	for (n; 10>n; n++){
		
		indoFat = n+1;

		printf("FAT: %d\n", indoFat);
	
		fat = fatorial(indoFat);
		
		printf("fatorado: %d\n", fat);

		E += 1/fat;

		printf("valor de E: %d\n", E);
	}
	
	return E;
}

int main(){
	int n, valor;
		
//	printf("digite aqui o valor de N: ");
//	scanf("%d", &n);
	n = 3;
	valor = valorE(n);
	printf("valor de E: %d", valor);
}

