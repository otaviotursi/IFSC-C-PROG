/*
Escreva um algoritmo que l� uma matriz M(5,5)
calcula as somas:
a) da linha 4 de M 
b) da coluna 2 de M
c) da diagonal principal
d) da diagonal secund�ria
e) de todos os elementos da matriz M Escrever essas somas e a matriz
*/

#include<stdio.h>
int main(){
	
	int linha, coluna, matriz[5][5], somaA, somaB, somaC, somaD, somaE; //Aqui vc define as variavel
	
	for(linha = 0; linha < 5; linha++){ 
		for(coluna = 0; coluna <= 4; coluna++){
		printf("Digite um valor para matriz M[%d][%d]: ", linha, coluna);
		scanf("%d", &matriz[linha][coluna]);
		}
	}
	

	for(coluna = 0; coluna < 5 ; coluna++){
		somaA = somaA + matriz[4][coluna];
	}
	

	for(linha = 0; linha < 5; linha++){
		somaB = somaB + matriz[linha][2];
	}

	for(linha = 0; linha < 5; linha++){
		for(coluna = 0; coluna < 5; coluna++){
			if(linha == coluna){
				somaC = somaC + matriz[linha][coluna];
				printf("%d %d\n", linha,coluna);
			}
		}
	}
	
//	for 
	

	for(linha = 0; linha < 5; linha++){
		for(coluna = 0; coluna < 5; coluna++){
			if(linha == coluna){
				somaD = somaD + matriz[linha][coluna];
				printf("%d %d\n", linha,coluna);
			}
		}
	}

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
