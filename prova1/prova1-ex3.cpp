#include <stdio.h>

int main(){
	
	int numero, produto, primo, div;
	
	numero=0;
	while(numero<=500){
		div=0;
		primo=2;
		while (primo<numero){
			if ((numero%primo)==0){
				div++;
			}
			primo++;	
		}
		if (div==0){
			printf("%d eh primo\n", numero);
		}
		numero++;
	}

return 0;	
}


