#include <stdio.h>

int main(){
	
	char nome[30];
	int salario, categoria, salarioReajustado;
	
	printf("programa reajuste de salario");
	printf("\n\n");
	
	printf("digite o seu nome: ");
	scanf("%c", &nome);
	printf("\n");
	
	printf("digite qual a sua categoria que voce trabalha: ");
	printf("1. A, C, F, H\n");
	printf("2. B, D, E, G\n");
	printf("3. I, K ate R\n");
	printf("4. J, S ate Z\n");
	scanf("%d", &categoria);
	
	printf("\n\n");
	
	printf("digite o seu salario: ");
	scanf("%d", &salario);

	switch (categoria){
		case 1:
			salarioReajustado = ((salario/10)*100);
			break;
		
		case 2:
			salarioReajustado = ((salario/15)*100);
			break;
		
		case 3:
			salarioReajustado = ((salario/20)*100);
			break;
		
		case 4:
			salarioReajustado = ((salario/25)*100);
			break;
		
		default:
			printf("valor invalido!\n");
		
	}
	printf("%c seu salario reajustado eh do valor de: %d", nome, salarioReajustado);


return 0;
}
