/* 3.   
Tentando descobrir se um dado era viciado, um dono de cassino honesto (BUrLAA!) o lançou n vezes.
Dados os n resultados dos lançamentos, determinar o número de ocorrências de cada face. */


#include <stdio.h>
#include <stdlib.h>

 
int main(){

	int nlancamento=7, i, vetor[6], lado;

//	printf("Digite o numero de vezes que o dado foi lancado: ");
//	scanf("%d", &nlancamento);

	for(i = 1; i <= 6; i++){
		vetor[i] = 0;	
	}
	
	for (i = 0; i < nlancamento; i++)
	  {

	    printf("%d ", rand() % 6 +100);
	  }


//	for(i = 1; i <= nlancamento; i++){
//		if(vetor[i] != 0) {
//			printf("A face %d caiu %d vezes. \n", i, vetor[i]);
//		}	
//	} 

	return 0;	
}
