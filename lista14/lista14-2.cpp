
/*
2. 
Fa�a um algoritmo que leia n pares de valores (n, r)
escreva, para cada par de valor, a combina��o de n elementos agrupados r a r.
Defina uma fun��o para calcular a combina��o de n elementos agrupados r a r
utilizando a f�rmula abaixo:

 C (n, r) = n! .
 	  r! (n - r)! 
*/



#include <stdio.h>


int fatoracao(int valor){
	
	int  n;
		
	for(n=1; valor>1; valor=valor-1){
		n = valor*n;
//		printf("%d\n", n);
	}
	return n;
//	printf("finalizado\n\n");	
}

int combinacao(int n, int r){
	return (fatoracao(n)/(fatoracao(r)*fatoracao(n-r)));
}


int main(){
	
	int n, r, resultado;
	printf("programa para calcular a combinacao com 2 valores\n");
	printf("digite o valor de N: ");
	scanf("%d", &n);
	printf("digite o valor de R: ");
	scanf("%d", &r);

	resultado = combinacao(n, r);
	printf("resultado: %d", resultado);
	
	
}






