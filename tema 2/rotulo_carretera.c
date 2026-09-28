/* Nombre del programa: Convertir los kilómetros, decámetros y metros a metros y hacer su rótulo
    Autor: Raul Ruiz Escribano
    Fecha: 26/09/2026*/


#include <stdio.h>

void main(){
	//declaro las variables
	//1km = 1000m
	int kilometros=0;
	//1 dam = 10m
	int decametros=0;
	int metros=0;
	int rotulo=0;
	
	//recojo el numero introducido por el usuario
	printf("Introduce los datos de la longitud de la carretera en kilometros,decametros,metros: ");
	scanf("%d,%d,%d",&kilometros,&decametros,&metros);
	
	//calculo el rotulo de la carretera
	rotulo=(kilometros*1000)+(decametros*10)+metros;
	
	//muestro el rotulo de la carretera
	printf("el rotulo de la carretera es: %d metros",rotulo);
	
}