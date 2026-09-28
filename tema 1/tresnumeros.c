/*	Nombre del programa: Comparacion de tres datos
	Autor: Raul Ruiz Escribano
	Fecha: 16-09-2026 */
	
// Directivas  de preprocesador
#include <stdio.h>

// Prototipo de funciones

//Funcion Principal Main 
void main (){
	int num1=0, num2=0, num3=0, mayor=0;
	
	printf("dame un numero entre 0 y 9: ");
	scanf(" %d", &num1);
	printf("dame otro numero entre 0 y 9: ");
	scanf(" %d", &num2);
	printf("dame otro numero entre 0 y 9: ");
	scanf(" %d", &num3);
	
	if(num1>= num2 && num1>=num3){
		mayor=num1;
	}else if(num2>=num1 && num2>=num3){
		mayor=num2;
	}else{
		mayor=num3;
	}
	printf("El numero mayor es: %d",mayor);

}
	
//Codificacion de funciones