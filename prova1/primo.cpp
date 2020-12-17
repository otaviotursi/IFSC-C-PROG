#include<stdio.h>
#include <locale.h>
 
int main() {
 setlocale(LC_ALL, "");
 int num, i, resultado = 0;
 
 printf("Digite um número: ");
// scanf("%d", &num);
for (num=0; num<80; num++){
	resultado = 0;
	for (i = 2; i <= num / 2; i++) {
		if (num % i == 0) {
		   resultado++;
		   
		}
	}
	
	if (resultado == 0)
		printf("%d é um número primo\n", num);
	else
		printf("%d não é um número primo\n", num);

}

return 0;
}
