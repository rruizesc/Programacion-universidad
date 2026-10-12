/* Nombre del programa: Operaciones en C
    Autor: Raul Ruiz Escribano
    Fecha: 04/10/2026*/

#include <stdio.h>


void main(){
	int num1=2/3;
	float num2=2.0/3;
	float num3=2/3.0;
	
	//esta salida dara 0 porque 2/3 daria 0,6 y al ser un entero lo trunca y sale 0
	printf("%d\n",num1);
	
	//esta salida dara 0,66667 porque es un float si fuese un int daria 0
	printf("%f\n",num2);
	
	//esta salida dara 0,66667 porque es un float si fuese un int daria un 0
	printf("%f",num3);
}
        