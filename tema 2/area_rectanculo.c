/* Nombre del programa: Calcular el area de un rectangulo con cuatro decimales
    Autor: Raul Ruiz Escribano
    Fecha: 26/09/2026*/


#include <stdio.h>


void main(){
	//declaro las variables
	float ancho=0.0,largo=0.0;
	
	//recojo los numeros introducidos por el usuario
	printf("Introduzca el ancho-largo de tu rectangulo: ");
	scanf("%f-%f",&ancho,&largo);
	
	
	//muestro el area del rectangulo con cuatro decimales		calculo el area a la hora de mostrarlo por pantalla
	printf("El area del rectangulo de largo: %.0f y de ancho: %.0f es: %.4f",largo,ancho,largo*ancho);
	
}