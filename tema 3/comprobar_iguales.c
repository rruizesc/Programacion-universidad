/* Nombre del programa: Comprobar si son iguales dos numeros enteros
    Autor: Raul Ruiz Escribano
    Fecha: 29/09/2026*/


#include <stdio.h>

void main(){
	//declaro las variables
	int num1=0,num2=0,reusltado=0;
	
	//le pido al usuario la densidad y la masa
	printf("Introduce dos numeros enteros separados por ,: ");
	scanf("%d,%d", &num1,&num2);
	//limpiamos el buffer
	while(getchar ()!='\n');
	
	//calculo el resto del numero
	resultado=num1==num2;
	
	//muestro por pantalla si son iguales
	printf("Si los numeros son iguales aparecera un 1: %d\n",resultado);
	
}