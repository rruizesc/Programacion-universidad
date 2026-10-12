/* Nombre del programa: Seleccion de canal
    Autor: Raul Ruiz Escribano
    Fecha: 04/10/2026*/

#include <stdio.h>

void main(){

    int madre, padre, hijo;

    printf("Introduce el canal que quiere la madre: ");
    scanf("%d", &madre);

    printf("Introduce el canal que quiere el padre: ");
    scanf("%d", &padre);

    printf("Introduce el canal que quiere el hijo: ");
    scanf("%d", &hijo);

    if(madre == padre){
        printf("El canal seleccionado es: %d\n", madre);
    }
    else{
        printf("Los padres no coinciden.\n");
        printf("El canal seleccionado es: %d\n", hijo);
    }
}