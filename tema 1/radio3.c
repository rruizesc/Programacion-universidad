/*	Nombre del programa: Area de un circulo de radio 3
	Autor: Raul Ruiz Escribano
	Fecha: 15-09-2026 */
	
// Directivas  de preprocesador
#include <stdio.h>
#define PI 3.14

// Prototipo de funciones

//Funcion Principal Main 
void main (int argc, char **argv){
	float Miradio = 3.0;
	float Miarea = 0.0;
	Miarea = PI* Miradio* Miradio;
	printf("El area de un circulo de radio %f es: %f", Miradio, Miarea);

}

//Codificacion de funciones