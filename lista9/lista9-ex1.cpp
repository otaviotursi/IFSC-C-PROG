#include <stdio.h>
int main(){
	
	int  SomaPar, ParN, SomaImpar, ImparN;
	
	
	//PAR
	printf("NUMEROS PARES\n");
	for (ParN=1; ParN <= 100; ParN +=2)
	{
	SomaPar = 50*(2 + ParN)/2;
	}
	printf("Soma dos numeros pares entre 1 a 100  eh: %d\n", SomaPar);
	
	
	//IMPAR 
	printf("\n\n\nNUMEROS IMPARES\n");
	for (ImparN=1; ImparN <= 100; ImparN +=1)
	{
	SomaImpar = 49*(1 + ImparN)/2;
	}
	
	printf("Soma dos numeros impares entre 1 a 100 eh: %d\n", SomaImpar);
	
return 0;
}
