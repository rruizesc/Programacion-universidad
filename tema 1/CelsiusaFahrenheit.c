/*	Nombre del programa: Conversor de temperaturas
	Autor: Raul Ruiz Escribano
	Fecha: 16-09-2026 */
	
// Directivas  de preprocesador
#include <stdio.h>

// Prototipo de funciones
float Celsius_to_Farenheit(float grados_celsius);

//Funcion Principal Main 
void main (){
	float Celsius=0.0;
	float Fahrenheit=0.0;
	printf("Cual es tu temperatura en grados Celsius: ");
	scanf(" %float", &Celsius);
	Fahrenheit = Celsius_to_Farenheit(Celsius);
	printf("Tu temperatura %f en grados Fahrenheit es: %f", Celsius, Fahrenheit);

}
	
//Codificacion de funciones
float Celsius_to_Farenheit(float Celsius){
	float conversor=0.0;
	conversor= Celsius*9/5+32;
	return(conversor);

}