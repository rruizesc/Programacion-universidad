/*	Nombre del programa: Area de un circulo de radio X
	Autor: Raul Ruiz Escribano
	Fecha: 15-09-2026 */
	
// Directivas  de preprocesador
#include <stdio.h>
#define PI 3.14

// Prototipo de funciones
float AreaCirculo(float Radio);

//Funcion Principal Main 
void main (int argc, char **argv){
	float Miradio = 0.0;
	float Miarea = 0.0;
	printf("¿Que radio quieres que tenga tu circulo?: ");
	scanf(" %float", &Miradio);
	Miarea = AreaCirculo(Miradio);
	printf("El area de un circulo de radio %f es: %f", Miradio, Miarea);

}
	
//Codificacion de funciones
float AreaCirculo(float Radio){
	float Area=0.0;
	Area = PI* Radio* Radio;
	return(Area);

}