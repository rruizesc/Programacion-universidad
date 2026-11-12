/* Nombre del programa: Tabla de multiplicar
    Autor: Raul Ruiz Escribano
    Fecha: 13/10/2026*/
	
#include <stdio.h>
#include <stdlib.h>//para el rand
#include <unistd.h>//para el getpid
#define max 10

void main(){

    int tabla=0;
	int pares=0;
	int contadorpar=0,contadorimpar=0;
	
	printf("Que tabla quieres mostrar: ");
	scanf("%d",&tabla);
	
	//bucle que se repite 10 veces
	for(int i=0;i<=max;i++){
		//printf("%d * %d = %d \n",tabla,i,tabla*i);
		pares=((tabla*i)%2);
		if(pares==0){
			printf("%d * %d = %d numero par\n",tabla,i,tabla*i);
			contadorpar++;
		}else{
			printf("%d * %d = %d numero impar\n",tabla,i,tabla*i);
			contadorimpar++;
		}
	}
	printf("pares: %d \nimpares: %d",contadorpar,contadorimpar);
}
	