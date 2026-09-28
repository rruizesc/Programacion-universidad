/*	Nombre del programa: suma y resta 2 numeros enteros
	Autor: Raul Ruiz Escribano
	Fecha: 15-09-2026 */
	
// Directivas  de preprocesador
#include <stdio.h>
#include <ctype.h>

// Prototipo de funciones

//Funcion Principal Main 
void main (){
	int numero1=0, numero2=0, resultado=0;
	char operacion;
	
	//pedir al usuario los 2 numeros
	printf("Introduzca el primer numero: ");
	scanf(" %d",&numero1);
	printf("Introduzca el segundo numero: ");
	scanf(" %d",&numero2);
	
	//pido al usuario que operacion quiere hacer si sumar o restar
	printf("Que es lo que quieres hacer con estos dos numeros s/r: ");
	scanf(" %c", &operacion);
	//pongo en minuscula el texto escrito por el usuario
	operacion=tolower(operacion);
	
	//if y else para las opciones de s y r y si pone cualquier otra cosa operacion incorrecta
	if(operacion=='s'){
		resultado=numero1+numero2;
		printf("el resultado de la suma de %d + %d es: %d",numero1, numero2, resultado);
	}else if(operacion=='r'){
			resultado=numero1-numero2;
			printf("el resultado de la resta de %d - %d es: %d",numero1, numero2, resultado);
	}else{
		printf("operacion incorrecta");
	}
}
	
//Codificacion de funciones