#include <stdio.h>

int main(){
		
	int an;
	
	printf("digite um numero inteiro, maior que 2: ");
	scanf("%d", an);
	
	
	while (an > an-1){
		an = (an-1) + (an-2);
		printf("%d", an);
	}
	
	
return 0;	
}
