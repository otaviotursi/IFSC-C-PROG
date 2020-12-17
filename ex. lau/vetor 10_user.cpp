#include <stdio.h>

int main(){
	
	int a, vetor, numeros[10], numeros2[10];
	
	for (a=1; a<=10; a++){
		printf("digite um numero: ");
		scanf("%d", &vetor);
		numeros[a] = vetor;
		numeros2[a] = vetor*2;
	} 
	for (a=1; a<=10; a++){
		printf("valor do vetor1 %d | valor do vetor2 %d\n",numeros[a],numeros2[a]);
	} 

	
}
