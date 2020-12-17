/*
Em uma classe há n alunos,
cada um dos quais realizou k provas com pesos distintos.
Dados n,k, os pesos das k provas e as notas de cada aluno,
calcular a média ponderada das provas para cada aluno e a 
média aritmética da classe em cada uma das provas.
*/

#include <stdio.h>

int main(){
	
	int alunos, provas, geral, provaPeso, peso[provaPeso],totalPeso=0,
	linha, coluna, notaProva[100][100], somaNotas, totalNotas;
	 
	float mediaponderada[100];
	
//	float media[alunos],media_turma=0, soma_notas;	  // recebe a soma das 	notas de cada aluno		  

	printf("Total de alunos: " ); 
	scanf( "%d", &alunos);	 
	printf( "Entre com total de provas: " );
	scanf( "%d", &provas);
	
	for (provaPeso=0; provaPeso < provas; provaPeso++){	
		printf("digite o peso da prova %d: ", provaPeso+1);
		scanf("%d", &peso[provaPeso]);
		totalPeso += peso[provaPeso];
	}
	
	printf("alunos%d\n", alunos);
	printf("provas %d\n", provas);
	printf("peso das provas %d\n", totalPeso);

	for (linha = 0; linha < alunos; linha++){
		printf("\n Aluno %d\n", linha+1);
		
		for(coluna = 0; coluna<provas; coluna++){
			
			printf("\nProva %d Nota:", coluna+1);
			scanf("%d", &notaProva[linha][coluna]);			
			printf("nota: %d\n", notaProva[linha][coluna]);
			
		}
	}
	
	printf("\n\n");
	for (linha = 0; linha<alunos; linha++){
		for (coluna=0;coluna<provas; coluna++){
			mediaponderada[linha] += (notaProva[linha][coluna])/totalPeso;
		}
		printf("aluno %d, media: %f\n", linha+1, mediaponderada[linha]);
		totalNotas += mediaponderada[linha]/alunos;	
	}
	
	printf("Media geral dos alunos: %d", totalNotas);
	
	return 0;
}
