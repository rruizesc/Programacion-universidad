/* Nombre del programa: tipos de prints
    Autor: Raul Ruiz Escribano
    Fecha: 24/09/2026*/


#include <stdio.h>

void main(){
	//declaro las variables
	float x=110.1;
	double y=110.1;
	
	//muestro los mensajes por pantalla
	printf("float:%.16f  double:%.16f", x,y);
	
	/*la salida entre el float y el double es diferente.
	Para el float el 110.1 no existe entonces te da el numero mas proximo que es 110.099999
*/
}