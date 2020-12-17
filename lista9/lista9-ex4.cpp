#include <stdio.h>

int main()
{
	int a, b, c;
	printf("o valor a ser inserido irá delimitar a quantidade maxima de numeros a serem calculados\n");
	printf("digite qualquer valor:");
	scanf("%d", &c);
	printf("\n");
	
	a=8;
	b=10;
	printf("%d\n", a);
	printf("%d\n", b);
	
	do{

	a=a*2;
	b=a+b;
	printf("%d\n", a);
	printf("%d\n", b);
	    
	}while(b<c);
		
return 0;
}
