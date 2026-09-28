/* Nombre del programa: Conversion de numeros en hexadecimal y octal
    Autor: Raul Ruiz Escribano
    Fecha: 26/09/2026*/


#include <stdio.h>

void main(){
	//declaro las variables
	int numero=0;
	
	//recojo el numero introducido por el usuario
	printf("Introduzca un numero para convertirlo ese mismo numero en hexadecimal y en octal: ");
	scanf("%d",&numero);
	
	//muestro el numero en hexadecimal
	printf("Tu numero %d en hexadecimal es: %x \n",numero, numero);
	
	//muestro el numero en octal
	printf("Tu numero %d en octal es: %o \n",numero, numero);
	
}