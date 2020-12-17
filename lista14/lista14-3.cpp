/*
Fa�a um algoritmo que leia n valores inteiros representando o valor de um �ngulo e escreva o seno, o
cosseno e a tangente do �ngulo lido. Defina fun��es para calcular o seno, o cosseno e a tangente de um
dado �ngulo em radianos utilizando as f�rmulas abaixo:
seno (x) = x - x3
 + x5
 - x7
 + ...
 3! 5! 7!
cosseno (x) = 1 - x2
 + x4
 - x6
 + ...
 2! 4! 6!
tangente (x) = seno (x) .
 cosseno (x)
OBSERVA��O: considere os 20 primeiros termos para o c�lculo do seno e do cosseno ou calcular
aproxima��es adicionando-se novos termos �s s�ries at� que a diferen�a absoluta entre dois valores
sucessivos seja menor do que 10-3, isto �, | aproxima��o i
 - aproxima��o i + 1 | < 0.001 

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


int fatorial(int valor){
	
	int  n;
		
	for(n=1; valor>1; valor=valor-1){
		n = valor*n;
	}
//	printf("N: %d\n", n);
	return n;
	
}

int seno(int x){
	int sen, i, valor=3;
	
	sen = x - x/potencia(x, 3);
	
	for (i=0; i<x; i++){
		printf("i %d", i);
		sen = sen + (x/potencia(x, (valor+2)));
		
//		printf("sen %d", sen);
	}
	return sen;
}


int cos(int x){
	int sen, i, valor=2, cos;
	
	sen = x - x/potencia(x, 3);
	
	for (i=0; i<x; i++){
		printf("i %d", i);
		sen = sen + (x/potencia(x, (valor+2)));
		
		printf("cos %d", sen);
	}
	return cos;
	
}

int tangente(int sen, int cos){
	int i, tangent, termo;
	for (i=0; i<termo; i++){
		tangent= sen(termo)/cos(termo);
	}
	return tangent;
}

int main(){
	int i , termo, termoSeno, termoCos;
	for (i=0; i<5; i++){
		
		printf("digite os 20 primeiros termos: ");
		scanf("%d", &termo);
		
	}
	termoSeno = seno(termo);
	termoCos = cos(termo);
	printf("%d", termoSeno, termoCos);
}
