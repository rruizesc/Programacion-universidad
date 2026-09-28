/* Nombre del programa: calculo_propina
    Autor: Raul Ruiz Escribano
    Fecha: 19/09/2026*/

// Directivas  de preprocesador
#include <stdio.h>

// Prototipo de funciones

//Funcion Principal Main 
void main(){
    float factura=0.0, propina=0.0;

    printf("Introdue el total de la factura: ");
    scanf(" %f", &factura);
    printf("Introduce el porcentaje de propina que deseas dejar: ");
    scanf(" %f", &propina);
	
//directamente calculo la propina a la hora de mostrarlo por pantalla
    printf("La cantidad de propina a pagar es: %f\n", (factura*propina)/100);
}

//Codificacion de funciones