/* Nombre del programa: Adivinar edad
    Autor: Raul Ruiz Escribano
    Fecha: 13/10/2026*/
	
#include <stdio.h>
#include <stdlib.h>//para el rand
#include <unistd.h>//para el getpid

void main(){

    int edad_pedida=0,correcto=0;
	
		while(correcto==0){
			printf("Introduce tu edad ");
			if(scanf("%d", &edad_pedida) == 1){
				if(edad_pedida >= 0){
					correcto = 1;
					//Este else solo entra con numeros negativos 
				}else {
					printf("No es una edad valida \n");
				}
			}else {
				printf("Debes introducir un numero \n");
				while(getchar() != '\n');
			}
		}
		printf("Tu edad es: %d",edad_pedida);
}
	