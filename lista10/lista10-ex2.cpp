#include "stdio.h"

int main(){
  int a, b, numero, cont, numeroMaximo;

  a = 0;
  b = 1;

  printf("Digite um numero maximo de Fibonacci: ");
  scanf("%d", &numeroMaximo);
  if(numeroMaximo < 2){
  	
	printf("digite um numero valido");
	
  } else {
	
	printf("Fibonacci:\n");
	printf("%d\n", b);

	for(cont = 0; cont < numeroMaximo; cont++){
		numero = a + b;
		a = b;
		b = numero;
		
		printf("%d\n", numero);
		
	}
  }

return 0;
}
