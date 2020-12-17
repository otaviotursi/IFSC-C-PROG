#include <stdio.h>
 #include <stdlib.h>

 int main ()

 {
 	
	float idade, media=0, backup_media=0, backup;
	int cont, resp;
	cont=0;
	
    do{
        printf("PROGRAMA PARA CALCULO MEDIA DE IDADE DE VARIS PESSOAS\n");
        
        printf ("DIGITE A IDADE:");
        scanf ("%f", &idade);

		cont++;
        if (idade > 0){
	        backup_media+=idade;
	        media=backup_media;
	        media/=cont;	
		}
		else
			continue;
			
		printf("\n\nDigite 1 para calcular nova dade ou 2 para sair:");
	    scanf("%d", &resp);
	    printf("\n\n\n");
	    
	}while(resp==1);
	
    
	printf("media das idades eh de: %.2f anos", media);

return 0;
}	
