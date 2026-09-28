/*	Nombre del programa: comporbar caracter A 
	Autor: Raul Ruiz Escribano
	Fecha: 17-09-2026 */
	
// Directivas  de preprocesador
#include <stdio.h>
#include <ctype.h>

// Prototipo de funciones


//Funcion Principal Main 
void main (){
	char letra= 'A';
	letra=tolower(letra);
	printf("Caracter en minuscula %c\n", letra);
	
//utilicando el sistema de codificacion ASCI
	char letra2='A';
	printf("Caracter en minuscula %c\n", letra2+32);

}
	
//Codificacion de funciones
