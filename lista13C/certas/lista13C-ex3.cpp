
#include <stdio.h>
#include <stdlib.h>


int main(){
	
	int i, j, nlancamento, sorteio[6], vezesSorteado;
	printf("programa para calcular se o dado esta viciado");
	printf("digite quantas vezes o dado foi arremessado: ");
	scanf("%d", &nlancamento);

	for (i = 0; i < nlancamento; i++){
		
		sorteio[i] = rand() % 6 +1;
//	    printf("%d\n", sorteio[i]);
	
	}
	
	for (j=0; j<6; j++){
		vezesSorteado = 0;
		for (i=0; i<nlancamento; i++){
			if (sorteio[i] == j+1){
				vezesSorteado +=1;
				printf("o numero %d, foi sorteado %d vezes\n", sorteio[i], vezesSorteado);
			}
		}
		
	}
	
}

