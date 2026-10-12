/* Nombre del programa: Manipulador de bits
    Autor: Raul Ruiz Escribano
    Fecha: 01/10/2026*/

#include <stdio.h>


void main(){

    int num=0;
	int bitmovido=0;
	int comprobar=0;


    printf("Introduce un numero: ");
	scanf("%d",&num);

    bitmovido=num>>2;
	comprobar=bitmovido&num;
	printf("el tercer bit es un %d ",comprobar);
}