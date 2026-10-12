/* Nombre del programa: incremento de salario
    Autor: Raul Ruiz Escribano
    Fecha: 22/09/2026*/


#include <stdio.h>

void main(){
	//declaro las variables
	int sueldo=0, porcentaje=0, resultado=0, nuevosueldo=0;
	
	//muestro los mensajes por pantalla
	printf("Cual es tu salario: ");
	scanf("%d ",&sueldo);
	printf("Cual es tu porcentaje: \n");
	scanf("%d ",&porcentaje);
	
	resultado=sueldo*(porcentaje/100);
	nuevosueldo = sueldo+resultado;
	printf("Tu incremento es de: %d",resultado);


}