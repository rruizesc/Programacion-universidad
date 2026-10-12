/* Nombre del programa: Comprobar condiciones
    Autor: Raul Ruiz Escribano
    Fecha: 29/09/2026*/


#include <stdio.h>
#include <ctype.h>

void main(){
	//declaro las variables
	int edad=0;
	char entrada='\0', adulto='\0';
	
	//le pido al usuario la densidad y la masa
	printf("Introduce tu edad: ");
	scanf("%d", &edad);
	while(getchar ()!='\n');
	printf("\n Introduce un S/N si dispones de una entrada valida: ");
	scanf("%c", &entrada);
	while(getchar ()!='\n');
	printf("\nEsta acompanado de un adulto S/N: ");
	scanf("%c", &adulto);
	//limpia el buffer
	while(getchar ()!='\n');
	
	entrada=toupper(entrada);
	adulto=toupper(adulto);
	
	
	//compruebo los casos en los que puede acceder al recinto
	if(edad>=18&&entrada=='S'){
		printf("Puedes pasar");
	}else if (edad<18&&entrada=='S'&&adulto=='S'){
		printf("Puedes pasar");
	}else{
		printf("No puedes pasar");
	}
}