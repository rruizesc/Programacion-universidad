/* Nombre del programa: Comprobar si la letra es mayuscula o minuscula
    Autor: Raul Ruiz Escribano
    Fecha: 29/09/2026*/


#include <stdio.h>
#include <ctype.h>

void main(){
	//declaro las variables
	char letra='\0';
	char letraM='\0', letram='\0';
	int comprobar=0;
	
	//le pido al usuario la densidad y la masa
	printf("Introduce un caracter en minusculas o mayusculas: ");
	scanf("%c", &letra);
	//limpia el buffer
	while(getchar ()!='\n');
	
	//puedo poner en mayuscula o minuscula la letra recibida se necesita el #include <ctype.h>
	letraM=toupper(letra);
	letram=tolower(letra);
	
	//si la letra es mayuscula comprobar valdra 1 si no sera 0 
	comprobar=letra==letraM;
	
	//muestro por pantalla la letra y el valor de la comprobacion si es mayusculas o minusculas
	printf("Si el numero que sale es un 1 la letra que escribiste es una mayuscula si no es una minuscula: %d  %c",comprobar,letra);
	
	
}