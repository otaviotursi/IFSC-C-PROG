
/*
2. 
Faça um algoritmo que leia n pares de valores (n, r)
escreva, para cada par de valor, a combinação de n elementos agrupados r a r.
Defina uma função para calcular a combinação de n elementos agrupados r a r
utilizando a fórmula abaixo:

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






