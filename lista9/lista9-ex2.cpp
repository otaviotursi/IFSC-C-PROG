#include <stdio.h>
#include <stdlib.h>

 int main ()

 {
 	
	float altura, backup_altura, media;
	int cont, resp;
	cont=1;
	
    printf("PROGRAMA PARA CALCULO DE ALTURA DE VARIAS PESSOAS\n");
    printf("QUANDO FOR DIGITAR A ALTURA DEVE-SE USAR '.' E NAO USAR VIRGULA\n");
    printf("voce pode digitar ate 20 valores\n\n");
    
    do{
    	
        printf("valor n. %d\n", cont);
        printf ("DIGITE A ALTURA:");
        scanf ("%f", &altura);

		cont++;
        backup_altura+=altura;
        media=backup_altura;
        media/=cont;	
	        
	}while(cont<=20);
	
	
    
	printf("media das alturas eh: %.2fmetros ", media);

return 0;
}	
