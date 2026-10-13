/*  Nombre del programa: Domotica con bits
    Autor: Raul Ruiz Escribano
    Fecha: 12/10/2026*/

#include <stdio.h>
#define bit 8

void printBinary(int number, int bits);

void main(){
	int estadoinicial=0,encender=0,apagar=0,invertir=0;
	int mascara=0;
	int estadomodificado=0;
	
	printf("Estado inicial (0-255): ");
	scanf("%d",&estadoinicial);
	printf("Luz a encender (0-7): ");
	scanf("%d",&encender);
	printf("Luz a apagar (0-7): ");
	scanf("%d",&apagar);
	printf("Luz a invertir (0-7): ");
	scanf("%d",&invertir);
	
	//compruebo que el numero inicial del estado es un numero entre el 0 y el 255 
	if(estadoinicial<=255 && estadoinicial>=0){
		
	//si las luces no estan en el rango entre 0 o 7 muestra un mensaje de error
	if(encender<0 || encender >7 || apagar<0 || apagar >7 || invertir<0 || invertir >7){
		printf("Esa luz no existe");
	}else{
		//muestro el estado inicial de las luces
		printf("Inicial: \t");
		printBinary(estadoinicial,bit);
		
		//Encender las luces 
		//muevo el primer bit a la posicion que se quiere encender 
		//y luego comparo si uno de los dos bits de esa posicion esta a 1 si no se pone a 1 con el operador or |
		mascara= 1<< encender;
		estadomodificado= estadoinicial | mascara;
		printf("Encender: \t");
		printBinary(estadomodificado,bit);
		
		//Apagar las luces
		//muevo el primer bit a la posicion que se quiere apagar 
		//invierto la mascara con el operador ~ para que solo este a 0 la luz que se quiere apagar 
		//y comparo con el ultimo estado si ambos bits estan a 1 con el operador and &
		mascara= 1<< apagar;
		estadomodificado= estadomodificado & ~mascara;
		printf("Apagar: \t");
		printBinary(estadomodificado,bit);
		
		//Invertir las luces
		//muevo el primer bit a la posicion a invertir
		//con el operador XOR ^ hago que la posicion a invertir si es 1 en el estado se ponga a 0  0|0=0 1|1=1 1|0=1 0|1=1
		mascara= 1<<invertir;
		estadomodificado= estadomodificado ^ mascara;
		printf("Invertir: \t");
		printBinary(estadomodificado,bit);
		
		//muevo el primer bit 3 hacia la izquierda y compruebo que no sea 0 con el operador and & 
		if((estadomodificado & (1<<3)) !=0 ){
			printf("Luz del salon: encendida");
		}else{
			printf("Luz del salon: apagada");
		}
	}
	}else{
		printf("El numero del estado no es valido");
	}
}


//Muestra en pantalla la representación binaria de un
//Número entero utilizando el número de bits especificado
void printBinary(int number, int bits) {
 unsigned int mask = 1 << (bits - 1);
 for (int i = 0; i < bits; i++) {
 if (number & mask)
printf("1");
else
printf ("0");
 mask >>= 1;
 }
 printf("\n");
}