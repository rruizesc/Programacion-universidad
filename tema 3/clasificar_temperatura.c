/* Nombre del programa: Clasificar una temperatura
    Autor: Raul Ruiz Escribano
    Fecha: 29/09/2026*/


#include <stdio.h>

void main(){
	//declaro las variables
	int temperatura=0;
	
	//le pido al usuario la temperatura
	printf("Introduce tu temperatura: ");
	scanf("%d", &temperatura);
	//limpia el buffer
	while(getchar ()!='\n');
	
	/*
	//Compruebo para cada temperatura que salgue un mensaje distinto
	if(temperatura>25){
		printf("como la temperatura es: %d se debe activar la refrigeracion",temperatura);
	}else if(temperatura<18){
		printf("como la temperatura es: %d se debe activar la calefaccion",temperatura);
	}else{
		printf("como la temperatura es: %d no es necesario activar ningun sistema",temperatura);
	}
	*/
	
	if(temperatura>=18 && temperatura<=25){
		printf("como la temperatura es: %d no es necesario activar ningun sistema",temperatura);
	}else if(temperatura<18){
		printf("como la temperatura es: %d se debe activar la calefaccion",temperatura);
	}else{
		printf("como la temperatura es: %d se debe activar la refrigeracion",temperatura);
	}
		
}