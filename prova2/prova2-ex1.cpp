/*
(3 pontos)
Segundo a conjectura de Goldbach,
qualquer n�mero par maior que 2 pode ser escrito como a soma de dois n�meros primos (por defini��o matem�tica, o n�mero 1 n�o � primo). 

Por exemplo
8 = 3 + 5 12 = 5 + 7 16 = 3 + 13

Fa�a um algoritmo que leia n�meros inteiros.
Para os n�meros pares positivos,
escreva um par de n�meros primos cuja soma seja igual ao pr�prio n�mero.
*/

#include <stdio.h>


int primo(int valorPrimoUsuario){
	
	int contador, vetor[1000],vetor1[1000], x, y, i, soma, numeroLaco1, numeroLaco2, resultado;

	for (numeroLaco1=2; numeroLaco1<valorPrimoUsuario; numeroLaco1++){
		resultado = 0;
		for (i = 2; i <= numeroLaco1 / 2; i++) {
			if (numeroLaco1 % i == 0) {
			   resultado++;
			}
		}
		if (resultado == 0){
			vetor[numeroLaco1] += numeroLaco1;
//			printf("%d primo1\n", vetor[numeroLaco1]);
		} else{
			continue;
		}
	}
	
	for (numeroLaco2=0; numeroLaco2<valorPrimoUsuario; numeroLaco2++){
		resultado = 0;
		for (i = 2; i <= numeroLaco2 / 2; i++) {
			if (numeroLaco2 % i == 0) {
			   resultado++;
			}
		}
		if (resultado == 0){
			vetor1[numeroLaco2] += numeroLaco2;
			
//			printf("%d primo2\n", vetor1[numeroLaco2]);
		} else{
			continue;
		}
	}

	contador = 0;
	printf("numeros posiveis: \n");
	for (i=0; i<numeroLaco1; i++){
		for (contador=0; contador<numeroLaco2; contador++){
			if (vetor[i]>1 && vetor1[contador]>1){
				if (vetor[i] + vetor1[contador] == valorPrimoUsuario){
					x = vetor[i];
					y = vetor1[contador];
					soma = x + y;
					printf("%d + %d = %d\n", x, y, soma);
					break;
				}
			}
			
		}
	}

//return 0;	
}

int main(){
	int numero, funcaoPrimo;
	printf("vamos usar a conjectura de Goldbach\n\n");
	printf("digite aqui um numero par maior que 0: ");
	scanf("%d", &numero);
	while (numero<0 || numero%2==1){
		printf("digite aqui um numero par maior que 0: \n");
		scanf("%d", &numero);
	}
	
	if (numero%2 == 0){
		printf("\nnumero digitado: %d\n\n", numero);
		funcaoPrimo =  primo(numero);
	}
	
	
}


 
