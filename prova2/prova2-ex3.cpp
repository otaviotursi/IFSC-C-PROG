/*

(3 pontos) Com o surgimento dos computadores, um dos primeiros cálculos realizados foi o da trajetória de projéteis. 
Quando um projétil é atirado com uma velocidade inicial v (em m/s) a um ângulo de inclinação a (em radianos),
a posição (x, y) do projétil no plano vertical, no tempo t (em segundos) é calculada pela fórmula:

x = (v cos (a)) t
y = (v sen (a)) t - ½ g t²
onde 0 < a < 90 e g = 9.8 m/s².

ok - Faça um algoritmo que leia o valor da velocidade inicial v 
ok - e o valor do ângulo de inclinação a de um projétil 
e escreva os valores das coordenadas (x, y) em intervalos  de 0.1 s até o projétil atingir o solo.

*/

#include <stdio.h>


int potencia(int numero){
	int i, numero1=1, expoente=2;
	
//	printf("%d, %d\n", numero, expoente);
	
		
	for (i = 0; expoente>i; i++){
		numero1 = numero1 * numero;
//		printf("potencia: %d %d\n", numero1, numero);
	}
	
	return numero1;
}


int sen(int catetoOposto, int hipotenusa){
	int resultSeno;
	
	resultSeno = catetoOposto/hipotenusa;
	return resultSeno;
	
}


int cos(int catetoAdjacente, int hipotenusa){
	int resultCos;
	
	resultCos = catetoAdjacente/hipotenusa;
	return resultCos;
	
}


int trajeto(int velocidade, int inclinacao){
	int x, y, tempo=0.1, i;
	int catetoOposto, catetoAdjacente, hipotenusa;
	i=1;
	while (true){
		catetoOposto = i;
		catetoAdjacente = i;
		hipotenusa = 1;
		
		for (tempo = 0; tempo<10; tempo++){
			x = (velocidade*cos(catetoAdjacente, hipotenusa))*tempo;
			y = (((velocidade*sen(catetoOposto, hipotenusa))*tempo) -   9.8 * potencia(tempo))*-1;
		
		}
		
		if (y<0){
			printf("Atingiu o solo. Coordenadas x: %d y: %d\n", x, y);
			break;
		}
		
		printf("Coordenadas x: %d y: %d\n", x, y);
		i++;
	}
	
}


int main(){
	int velocidade, inclinacao, seno, coseno, traj, catetoOposto=1, catetoAdjacente=1, hipotenusa=1;
	
	printf("Programa para calcular a trajetoria de um projetil\n");
	
	printf("digite o valor de Velocidade do projetil: ");
	scanf("%d", &velocidade);
	printf("digite o grau de Inclinacao do projetil: ");
	scanf("%d", &inclinacao);
	printf("\n");
	while (inclinacao < 0 || inclinacao > 90){
		printf("digite o grau de inclinacao do projetil: ");
		scanf("%d", &inclinacao);
		printf("\n");
	}
	
	traj = trajeto(velocidade, inclinacao);
	
}
