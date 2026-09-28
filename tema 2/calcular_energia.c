/* Nombre del programa: Calcular la energia producida cuando la masa se convierte en energia
    Autor: Raul Ruiz Escribano
    Fecha: 26/09/2026*/


#include <stdio.h>
//declaro el valor de la velocidad de la luz
#define c 2.997925e10

void main(){
	//declaro las variables
	float masa=0.0,energia=0.0;

	//le pido al usuario la variable la leo y la pongo en una variable
	printf("Cual es la masa en gramos de tu objeto: ");
	scanf("%f",&masa);
	
	//calculo la energia del objeto
	energia=masa*c*c;
	
	//muestro la energia del objeto recibido
	printf("La energia del objeto con masa: %f es: %f \n",masa,energia);
	
	
}