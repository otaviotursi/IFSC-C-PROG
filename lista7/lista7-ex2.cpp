#include <stdio.h>

int main(){
	
	char sexoPessoa;
	float alturaPessoa, calculoPesoIdeal;
	int resp;
	
	do{
		
		printf("Programa para calcular o peso ideal\n\n");
		printf("Digite o seu sexo: \n");
		printf("M para sexo masculino\n");
		printf("F para sexo feminiono\n");		
		printf("Digite aqui: ");
		scanf("%c", &sexoPessoa);
		
		fflush(stdin);
		printf("Digite a sua altura: ");
		scanf("%f", &alturaPessoa);
		fflush(stdin);
		if (sexoPessoa == 'M' || sexoPessoa == 'm'){
			
			calculoPesoIdeal = (alturaPessoa * 72.7)-58;
			
		}
		
		else if (sexoPessoa == 'F' || sexoPessoa == 'f'){
			
			calculoPesoIdeal = (alturaPessoa * 62.1)-44.7;	
		}
		
		else{
			printf("Digite um sexo valido");
		}
			
		printf("Peso ideal: %.2f kg", calculoPesoIdeal);
		printf("\ndeseja realizar outra operacao? 1 para Sim 2 Para Nao:");
		scanf("%d", &resp);
		printf("\n");
		fflush(stdin);
	}while(resp==1);
	
return 0;
}
