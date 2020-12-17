#include <stdio.h>

int main(){
	
	int time=1, quebradeira, biscoito=1;
	quebradeira = time*biscoito;
	printf("Hora: %d, quantidade de biscoitos quebrados: %d\n", time, quebradeira);
	
	do{
		
		quebradeira = (quebradeira*3);
		printf("Hora: %d, quantidade de biscoitos quebrados: %d\n", time, quebradeira);
		
		time+=1;
	}while(time<=16);
	
}
