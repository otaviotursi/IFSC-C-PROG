/*
Escreva um algoritmo que l� uma matriz M(5,5)
calcula as somas:
a) da linha 4 de M 
b) da coluna 2 de M
c) da diagonal principal
d) da diagonal secund�ria
e) de todos os elementos da matriz M
Escrever essas somas e a matriz
*/

#include<stdio.h>
int main(){

	int linha, coluna, matriz[5][5], somaA, somaB, somaC, somaD, somaE; //Aqui vc define as variavel
	
	printf("programa para calculo de matrizes, voce precisa digitar 25 numeros: \n");
	
	for(linha = 0; linha < 5; linha++){ 
		for(coluna = 0; coluna <= 4; coluna++){
		printf("Digite um valor para matriz M[%d][%d]: ", linha, coluna);
		scanf("%d", &matriz[linha][coluna]);
		}
	}
	
	somaA=0;
	for(coluna = 0; coluna < 5 ; coluna++){
		somaA += matriz[4][coluna];
	}
	
	somaB=0;
	for(linha = 0; linha < 5; linha++){
		somaB += matriz[linha][2];
	}
	
	somaC=0;
	for(linha = 0; linha < 5; linha++){
		for(coluna = 0; coluna < 5; coluna++){
			if(linha == coluna){
				somaC += matriz[linha][coluna];
			}
		}
	}
	
	somaD=0;
	for(linha = 0; linha < 5; linha++){
		for(coluna = 0; coluna < 5; coluna++){
			if((linha + coluna)==4){
				somaD += matriz[linha][coluna];
			}
		}
	}
	
	somaE=0;
	for(linha = 0; linha < 5; linha++){
		for(coluna = 0; coluna < 5; coluna++){
			somaE += matriz[linha][coluna]; 
		}
	}

	printf("A: %d\n", somaA);
	printf("B: %d\n", somaB);
	printf("C: %d\n", somaC);
	printf("D: %d\n", somaD);
	printf("E: %d\n", somaE);
	
	printf("matriz: \n");
	for(linha = 0; linha < 5; linha++){
		for(coluna = 0; coluna < 5; coluna++){
			printf("%d ", matriz[linha][coluna]);
		}
		printf("\n");
	}
}
