/*
Escreva um algoritmo que lê uma matriz M(5,5)
calcula as somas:
a) da linha 4 de M 
b) da coluna 2 de M
c) da diagonal principal
d) da diagonal secundária
e) de todos os elementos da matriz M Escrever essas somas e a matriz
*/

#include<stdio.h>
int main(){
	
	int linha, coluna, matriz[5][5], somaA, somaB, somaC, somaD, somaE; //Aqui vc define as variavel
	
	for(linha = 0; linha < 5; linha++){ 
		for(coluna = 0; coluna <= 4; coluna++){
		printf("Digite um valor para matriz M[%d][%d]: ", linha, coluna);
		scanf("%i", &matriz[linha][coluna]);
		}
	}
	
//	linha 4 (a)
	for(coluna = 0; coluna < 5 ; coluna++){
		somaA = somaA + matriz[4][coluna];
	}
	
//	coluna 2 (b)
	for(linha = 0; linha < 5; linha++){
		somaB = somaB + matriz[linha][2];
	}
	
//	coluna diagonal principal (c)
	for(linha = 0; linha < 5; linha++){
		for(coluna = 0; coluna < 5; coluna++){
			if(linha == coluna){
				somaC = somaC + matriz[linha][coluna];
			}
		}
	}
	
//	coluna diagonal secundaria (d)
	for(linha = 0; linha < 5; linha++){
		for(coluna = 0; coluna <= 4; coluna++){
			if(linha + coluna == 4){
				somaD = somaD + matriz[linha][coluna];
			}
		}
	}
	
//	Soma de todos os elementos (E)
	for(linha = 0; linha < 5; linha++){
		for(coluna = 0; coluna < 5; coluna++){
			somaE = somaE + matriz[linha][coluna];
		}
	}
	
	printf("A: %d\n", somaA);
	printf("B: %d\n", somaB);
	printf("C: %d\n", somaC);
	printf("D: %d\n", somaD);
	printf("E: %d\n", somaE);
}
