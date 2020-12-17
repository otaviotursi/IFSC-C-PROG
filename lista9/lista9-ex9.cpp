#include <stdio.h>

int main ()
{
    float massa; // Massa inicial do material
    int tempo = 0;
        
    printf("Massa inicial:");
    scanf("%f", &massa);

    do{
    	massa = massa / 2.0;
        tempo++;
	}while(massa >= 0.5);
    
    printf("Massa final: %f gramas\nTempo: %d minutos" , massa, tempo);
return 0;
}

