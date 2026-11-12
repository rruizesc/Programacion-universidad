/* Nombre del programa: Estructura de alternativa o seleccion
    Autor: Raul Ruiz Escribano
    Fecha: 06/10/2026*/
	
#include <stdio.h>

void main(){
	//declaro mis variables
    int num=0;
	int centenas=0,unidades=0,decenas=0;
	
	printf("Dame un numero entero de tres cifras: ");
	scanf("%d",&num);
	
	//divido el numero entre 100 para saber la centena 
	centenas=num/100;
	//divido el numero y luego le hago su resto para saber la decena 
	decenas=(num/10)%10;
	//hago el resto del numero para saber la unidad
	unidades=num%10;
	
	//Compruebo que el numero introducido tiene al menos 3 cifras
	if(num>=100 && num<=999){
		printf("La unidad de tu numero es: %d la decena es: %d y la centena es: %d \n",unidades,decenas,centenas);
		
	//Le doy casos para cuando la centena es 1,2,3 y 5
	switch(centenas){
		case 1: 
		printf("la centena del numero es: %d \n",centenas);
		break;
		
		case 2:
		printf("la centena del numero es: %d \n",centenas);
		break;
		
		case 3:
		printf("la centena del numero es: %d \n",centenas);
		break;
		
		case 5:
		printf("la centena del numero es: %d \n",centenas);
		break;
		
		default:
		printf("la centena no es ni 1,2,3 o 5");
	}
	}else{
		printf("El numero no tiene tres cifras");
	}
    
}