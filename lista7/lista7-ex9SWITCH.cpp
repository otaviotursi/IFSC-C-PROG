#include <stdio.h>

int main(){
	
	char nome[60];
	int salario, categoria, salarioReajustado;
	
	printf("programa reajuste de salario");
	printf("\n\n");
	
	printf("digite o seu nome: ");
	scanf("%c", &nome);
	printf("\n");
	fflush(stdin); 
	printf("digite qual a sua categoria que voce trabalha: \n");
	printf("1. A, C, F, H\n");
	printf("2. B, D, E, G\n");
	printf("3. I, K ate R\n");
	printf("4. J, S ate Z\n");
	
	printf("digite o numero da categoria: ");
	scanf("%d", &categoria);
	fflush(stdin); 
	
	printf("\n");
	
	printf("digite o seu salario: ");
	scanf("%d", &salario);
	fflush(stdin); 
	
	switch (categoria){
		case 1:
			salarioReajustado = ((salario*10)/100)+salario;
			break;
		
		case 2:
			salarioReajustado = ((salario*15)/100)+salario;
			break;
		
		case 3:
			salarioReajustado = ((salario*20)/100)+salario;
			break;
		
		case 4:
			salarioReajustado = ((salario*25)/100)+salario;
			break;
		
		default:
			printf("valor invalido!\n");	
	}
	
	printf("%c seu salario reajustado eh do valor de: %d", nome, salarioReajustado);


return 0;
}
