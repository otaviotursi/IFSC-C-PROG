#include <stdio.h>
#include <Windows.h>

int main(){
		
	int cont, math1, math2, math3, math4, math5;
	cont=1;
	printf("						TABUADA 1 AO 10\n");
	printf("________________________________________________________________________________________________________________________\n");
	do{
		math1 = 1*cont;
		math2 = 2*cont;
		math3 = 3*cont;
		math4 = 4*cont;
		math5 = 5*cont;
		printf("	1x%d=%d		|	2x%d=%d		|	3x%d=%d		|	4x%d=%d		|	5x%d=%d\n",  cont, math1, cont, math2, cont, math3, cont, math4, cont, math5); Sleep(20);
		cont++;
		
	}while(cont<=10);
	
	printf("________________________________________________________________________________________________________________________\n");

	cont=1;
	do{
		math1 = 6*cont;
		math2 = 7*cont;
		math3 = 8*cont;
		math4 = 9*cont;
		math5 = 10*cont;
		printf("	6x%d=%d		|	7x%d=%d		|	8x%d=%d		|	9x%d=%d		|	10x%d=%d\n", cont, math1, cont, math2, cont, math3, cont, math4, cont, math5); Sleep(20);
		cont++;
		
	}while(cont<=10);
	
return 0;
}
