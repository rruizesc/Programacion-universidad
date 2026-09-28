/* Nombre del programa: ancho, precision y alineacion
    Autor: Raul Ruiz Escribano
    Fecha: 24/09/2026*/


#include <stdio.h>



void main(){
	//declaro las variables
	int i=123;
	float x=1024.251;
	
	//muestro los mensajes por pantalla
	printf(":%5d:  \n",i);
	printf(":%-5d:  \n",i);
	printf(":%05d:  \n",i);
	printf(":%2d:  \n",i);
	
	printf(":%12f:  \n",x);
	printf(":%12.4f:  \n",x);
	printf(":%-12.4f:  \n",x);
	printf(":%12.1f:  \n",x);
	printf(":%3f:  \n",x);
	printf(":%.3f:  \n",x);
	
	printf(":%12e:  \n",x);
	printf(":%12.4e:  \n",x);
	printf(":%12.1e:  \n",x);
	printf(":%3e:  \n",x);
	printf(":%.3e:  \n",x);


}