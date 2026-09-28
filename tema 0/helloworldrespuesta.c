/*
Programa Hello World el cual tienes que escribir s/n para ver el mensaje
*/
#include <stdio.h>
#include <ctype.h>

void main (){
	char respuesta='';
	
	printf("Quieres mostrar el mensaje? (s/n):");
	scanf(" %c", &respuesta);
	
	respuesta=tolower(respuesta);
	
	if(respuesta=='s'){
		printf("Hello World");
	}else{
		printf("Programa finalizado");
	}
	// como es una funcion void el return no necesito ponerlo 
	// return 0;
	
}