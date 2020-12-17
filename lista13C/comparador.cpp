/* (COMP 89) Dados dois strings (um contendo uma frase e outro contendo uma palavra),
determine o número de vezes que a palavra ocorre na frase.
Exemplo:
Para a palavra ANA e a frase :
ANA E MARIANA GOSTAM DE BANANA (2)
Temos que a palavra ocorre 4 vezes na frase. */

#include <stdio.h>

int main(){
	
	char frase[100], palavra[100];
	int palavraEncontrada = 0, coluna, linha, palavraOk;
	
	printf("Digite uma frase:");
	gets(frase);
	
	printf("Digite uma palavra:");
	gets(palavra);
	
	coluna = -1;
	
		
	linha=0;
	for(linha=0; linha<3; linha++){
		
		if (frase[coluna] == palavra[linha]){
			if(palavra[linha]!='\n'){
				linha++;
			}
			else{
				linha=0;
				coluna--;
			}
			
		}
		printf("Comparo %c(%d) com %c(%d)\n", palavra[linha], coluna, frase[coluna], linha);
	}
	
	return 0;	
}
