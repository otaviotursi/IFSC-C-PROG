#include <stdio.h>

int main(){
	
	int a, vetor, numeros[10], numeros2[10], numeros3[10];
	
	for (a=1; a<=10; a++){
		printf("digite um numero para o vetor 1: ");
		scanf("%d", &vetor);
		numeros[a] = vetor;
	}
	
	printf("\n");
	for (a=1; a<=10; a++){
		printf("digite um numero para o vetor 2: ");
		scanf("%d", &vetor);
		numeros2[a] = vetor;
	} 
	
	printf("\n");
	for (a=1; a<=10; a++){
		numeros3[a] = numeros[a] + numeros2[a];
		printf("valor do vetor1 %d | valor do vetor2 %d = soma %d\n",numeros[a],numeros2[a], numeros3[a]);
	} 

	
}
