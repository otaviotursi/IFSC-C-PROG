/*
Escreva um algoritmo que leia um número inteiro A e uma matriz V 30x30 de números. 
Conte quantos valores iguais a A estão na matriz.
Crie, a seguir, uma matriz X contendo todos os elementos de V diferentes de A.
Mostre os resultados
*/

#include <stdio.h> //incluíndo bibliotecas

int main() { //inicializando main

	int a, linha, coluna, contNaoIguais=0, cont=0, matV[30][30], matX[30][30];
	
	
	printf("informe valor de A: ");
	scanf("%d", &a);
	
	for (linha=0; linha<30; linha++) {
		for (coluna=0; coluna<30; coluna++) {
			printf("Digite um valor para matriz[%d][%d]: ", linha, coluna);
			scanf("%d", &matV[linha][coluna]);
		}
	}
	
	
	for (linha=0; linha<30; linha++) {
		for (coluna=0; coluna<30; coluna++) {
			if (matV[linha][coluna] == a) {
				cont++;
			}
			else {
				matX[linha][coluna] = matV[linha][coluna];
//				printf("matrizX[%d][%d]:", linha, coluna);
//				printf("%d\n", matX[linha][coluna]);
				contNaoIguais++;
			}
		}
	}
	
	printf("\nQuantidade de valores iguais a A que estao na matriz: %d\n", cont);
	printf("Quantidade de valores diferentes de A que estao na matriz: %d\n\n", contNaoIguais);
	printf("Valores de matrizX diferentes da matrizV\n");
	
	for (linha=0; linha<30; linha++) {
		for (coluna=0; coluna<30; coluna++) {
			
			printf("matrizX[%d][%d]:", linha, coluna);
			printf("%d\n", matX[linha][coluna]);
			contNaoIguais++;
			
		}
	}

return 0;
}
