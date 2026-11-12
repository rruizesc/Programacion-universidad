/* Nombre del programa: Adivinar un numero
    Autor: Raul Ruiz Escribano
    Fecha: 06/10/2026*/
	
#include <stdio.h>
#include <stdlib.h>//para el rand
#include <unistd.h>//para el getpid

void main(){

    int num_generado=0,num_pedido=11,contador=0;
	
	//genero un valor aleatorio con rango de 0 a 10
	srand(getpid());
	num_generado=rand()%11;
	
	while(num_generado!=num_pedido){
	printf("Dame un numero entre el 0 y el 10 ");
	scanf("%d",&num_pedido);
	while(getchar() != '\n');
	contador++;
	}
	printf("El numero era %d y el numero de intentos es %d",num_generado,contador);
}