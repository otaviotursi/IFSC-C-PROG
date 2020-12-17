#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	
	float nota1, nota2, nota3, matricula, mediaex, mediaprov;
	
	printf("digite o numero de matricula: ");
	scanf("%f", &matricula);
	
	printf("digite a primeira nota: ");
	scanf("%f", &nota1);
	
	printf("digite a segunda nota: ");
	scanf("%f", &nota2);
	
	printf("digite a terceira nota: ");
	scanf("%f", &nota3);
	
	mediaex = (nota1 + nota2 + nota3)/3;
	
	mediaprov = ((nota1 + nota2*2 + nota3*3)+mediaex)/7;
	printf("media aproveitamento: %f\n", mediaprov);
	
	if (mediaprov <= 4)
	{
		printf("matricula: %2f| notas de atividades: %2.0f, %2.0f, %2.0f| media parcial: %2.0f| media de aproveitamento: %2.0f|\n| conceito E |situacao: REPROVADO \n", matricula, nota1, nota2, nota3, mediaex, mediaprov);
	}
	
	else if (mediaex <= 6)
	{
		printf("matricula: %2.0f| notas de atividades: %2.0f, %2.0f, %2.0f| media parcial: %2.0f| media de aproveitamento: %2.0f|\n| conceito D | situacao: REPROVADO \n", matricula, nota1, nota2, nota3, mediaex, mediaprov);
	}
	
	else if (mediaex <= 7.5)
	{
		printf("matricula: %2.0f| notas de atividades: %2.0f, %2.0f, %2.0f| media parcial: %2.0f| media de aproveitamento: %2.0f|\n| conceito C | situacao: APROVADO \n", matricula, nota1, nota2, nota3, mediaex, mediaprov);
	}
	
	else if (mediaex <= 9)
	
	{
		printf("matricula: %2.0f| notas de atividades: %2.0f, %2.0f, %2.0f| media parcial: %2.0f| media de aproveitamento: %2.0f|\n| conceito B | situacao: APROVADO \n", matricula, nota1, nota2, nota3, mediaex, mediaprov);
	}
	
	else if (9 < mediaex)
	{
		printf("matricula: %2.0f| notas de atividades: %2.0f, %2.0f, %2.0f| media parcial: %2.0f| media de aproveitamento: %2.0f|\n| conceito A | situacao: APROVADO \n", matricula, nota1, nota2, nota3, mediaex, mediaprov);
	}
}
