/* Nombre del programa: Verificar si es par o impar
    Autor: Raul Ruiz Escribano
    Fecha: 29/09/2026*/


#include <stdio.h>

void main(){
	//declaro las variables
	int numero=0, resto=0;
	
	//le pido al usuario la densidad y la masa
	printf("Introduce un numero entero: ");
	scanf("%d", &numero);
	//limpiamos el buffer
	while(getchar ()!='\n');
	
	//calculo el resto del numero
	resto=numero%2;
	
	//compruebo si el resto del numero introducido es 0 para saber si es par o impar
	if(resto==0){
		printf("el numero introducido %d es un numero par \n",numero);
	}else{
		printf("el numero introducido %d es un numero impar \n",numero);
	}
	
	
}