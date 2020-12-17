#include <stdio.h>

int main(){
		
	int vetor=0, inscricao[vetor], altura[vetor], n=0, cont=0;
	char whileResp;
	
	do{
		
		printf("seu numero de inscricao: ");
		scanf("%d", &inscricao[vetor]);
		
		printf("seu numero de altura:");
		
		scanf("%d", &altura[vetor]);
		fflush(stdin);
		
		vetor +=1;
		cont +=1;
//		printf("contador: %d", cont);
		
		printf("\ndeseja realizar outra operacao? S para Sim | N Para nao: ");
		scanf("%c", &whileResp);
		printf("\n");
		fflush(stdin);
		
	}while(whileResp=='s' || whileResp=='S');
	
	vetor = 0;
	while(n<=cont){
		
		printf("incricao: %d\n", inscricao[vetor]);
		printf("altura: %d\n", altura[vetor]);
//		
//		(altura[vetor] >= (altura[vetor])){
//			printf("maior altura: %d", altura[vetor]);
//		
//		}
//		
		if (altura[vetor]<altura[(vetor+1)]){
			printf("altura: %d | inscricao numero %d\n", altura[vetor], inscricao[vetor]);
		}
		
		if (altura[vetor]>altura[(vetor)]){
			printf("altura: %d | inscricao numero %d\n", altura[vetor], inscricao[vetor]);
		}
		
		n+=1;
		vetor +=1;
	}
	
return 0;	
}
