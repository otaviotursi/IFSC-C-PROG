#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/*
Escreva um vetor que leia um vetor G de 20 elementos caracter que representa o gabarito de uma prova.
A seguir, para cada um dos 50 alunos da turma,
leia o vetor de respostas (R) do aluno e
conte o número de acertos.
Mostre o nº de acertos do aluno e uma mensagem APROVADO,
se a nota for maior ou igual a 6; e mostre uma mensagem de REPROVADO, caso contrário.
*/
 
int main(){
	
	char inputResposta=5, gabarito[inputResposta], linha=50, coluna=5, aluno[linha][coluna];
	int qntAlunos, contAcertos=0, cont;
	printf("Programa para calculo de acertos em prova\n");
	printf("Sao 5 perguntas, com 4 possiveis respostas cada\n");
	printf("Digite a quantidade de alunos: ");
	scanf("%d", &qntAlunos);
	fflush(stdin);
	
	printf("------------------\nDigite o Gabarito: \n");
    for (inputResposta=0;inputResposta<5;inputResposta++){
	    printf("Informe a resposta da questao %d: ", inputResposta+1);
		scanf("%c", &gabarito[inputResposta]);
		fflush(stdin);
    }
    printf("------------------\n");
	
	for (linha=0;linha<qntAlunos;linha++){
		printf("\nAluno %d\n", linha+1);
		contAcertos = 0;
		
		for (coluna=0;coluna<5;coluna++){
			
		    printf("digite a resposta da questao %d: ", coluna+1);
		    scanf("%c", &aluno[linha][coluna]);
			fflush(stdin);	
			printf("resposta %c - ", aluno[linha][coluna]);
		    
		    if (gabarito[coluna] == aluno[linha][coluna]){
		    	contAcertos+=1;
		    	printf("certa\n");
			}
			else{
				printf("errado\n");
			}
		}
		
		printf("quantidade de acertos %d\n", contAcertos);
		if (contAcertos >= 3){
			printf("Parabens voce acertou %d/%d questoes. APROVADO\n", contAcertos, coluna);
		}
		else{
			printf("Voce teve %d/%d acertos. REPROVADO\n", contAcertos, coluna);
		}
	}
	

    return 0;
}
