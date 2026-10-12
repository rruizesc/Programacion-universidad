/* Nombre del programa: Anno bisiesto
    Autor: Raul Ruiz Escribano
    Fecha: 04/10/2026*/

#include <stdio.h>

void main(){

    int ano;

    printf("Introduce un anno: ");
    scanf("%d", &ano);

    if((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)){
        printf("El anno es bisiesto\n");
    }
    else{
        printf("El anno no es bisiesto\n");
    }
}