/* Nombre del programa: Estructuras de iteracion o repetitivas
    Autor: Raul Ruiz Escribano
    Fecha: 06/10/2026*/
	
#include <stdio.h>

void main(){

    int num = 0;
    int op = 1;
    int contador = 0;

    while(op != 0){

        printf("Introduce un numero: ");
        scanf("%d", &num);
		
		if(num>0){
        contador++;
		}

        printf("Deseas introducir otro numero? (0) para salir, cualquier otro numero para continuar: ");
        scanf("%d", &op);
    }

    printf("Has introducido %d numeros\n", contador);
}