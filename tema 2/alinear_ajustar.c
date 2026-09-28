/* Nombre del programa: alinear numeros y ajustar la precision
    Autor: Raul Ruiz Escribano
    Fecha: 26/09/2026*/


#include <stdio.h>

void main(){
	//declaro las variables
	int numero=1324;
	float numerof=135.34893257783;
	
	//por defecto en C los numeros estan alineados a la derecha
	//Si quiero alinearlos a la izquierda pondria un signo -
	//printf("Numero entero alineado a la izquierda con 2 decimales: %-.2d \n");
	
	//Voy a darle que los numeros aparezcan con 10 espacios y luego el numero
	printf("Numero entero alineado a la derecha con 2 decimales: %10.2d \n",numero);
	printf("Numero float alineado a la derecha con 2 decimales: %10.2f \n",numerof);
}