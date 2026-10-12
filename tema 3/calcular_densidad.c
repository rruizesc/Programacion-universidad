/* Nombre del programa: Calcular densidad
    Autor: Raul Ruiz Escribano
    Fecha: 29/09/2026*/


#include <stdio.h>

void main(){
	//declaro las variables
	float volumen=0; 
	int masa=0, densidad=0;
	float fdensidad=0.0;
	
	//le pido al usuario la densidad y la masa
	printf("Introduzca el volumen,masa en g/mL: ");
	scanf("%f,%d", &volumen,&masa);
	
	//calculo el valor de la densidad 
	densidad=masa/volumen;
	fdensidad=masa/volumen;
	
	//muestro por pantalla el resultado
	printf("La densidad en entero es: %d \n",densidad);
	printf("La densidad en float es: %f \n",fdensidad);
	
	
}