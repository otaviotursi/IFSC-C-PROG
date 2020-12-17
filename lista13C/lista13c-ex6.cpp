/* (COMP 89) Dados dois strings (um contendo uma frase e outro contendo uma palavra),
determine o número de vezes que a palavra ocorre na frase.
Exemplo:
Para a palavra ANA e a frase :
ANA E MARIANA GOSTAM DE BANANA (2)
Temos que a palavra ocorre 4 vezes na frase. */

#include <stdio.h>

int main(){
	
	int palavraEncontrada = 0, coluna, linha, a, encontrei, cont, i, acertos, acertamos;
	char frase[cont], palavra[100];
	
	printf("Digite uma frase:");
	gets(frase);

	printf("%d", cont);
	
	printf("Digite uma palavra:");
	gets(palavra);
	
	coluna = -1;
	cont =0;
//	frase[cont] = 0;
	
	for(coluna = 0; coluna<frase[cont]; coluna++){
		printf("%d %d %d\n", cont, coluna, frase[cont]);
		
		printf("Comparo %c(%d) com %c(%d)\n", palavra[cont], coluna, frase[coluna], coluna);
		
		if (palavra[cont] == frase[coluna]){
//			printf("%d %d\n", cont, coluna);
//			printf("achou\n");
			cont++;
			acertamos ++;
			printf("%d\n", acertamos);
			
		} 
		
		if (palavra[cont] != frase[coluna]){
//			printf("%d %d\n", cont, coluna);
//			printf("nao achou\n");
			cont=0;
		}
		
			
		if(palavra[cont] == '\0')
		{
			
			cont = 0;	
			printf("estou aq 2\n");
		}
		
	}
		
	printf("A palavra %c aparece: %d vezes.\n", palavra, palavraEncontrada);
	
	return 0;	
}
