/* Nombre del programa: Clasificador de triangulos
    Autor: Raul Ruiz Escribano
    Fecha: 29/09/2026*/


#include <stdio.h>

void main(){
	//declaro las variables
	int lado1=0,lado2=0,lado3=0;
	
	//le pido al usuario el valor de los tres lados
	printf("Introduce el valor de los tres lados de un triangulo separados por ,: ");
	scanf("%d,%d,%d", &lado1,&lado2,&lado3);
	//limpia el buffer
	while(getchar ()!='\n');
	
	//comprobamos primero si los tres valores son validos
	if(lado1+lado2>lado3 && lado1+lado3>lado2 && lado2+lado3>lado1){
		//compruebo que los tres lados son iguales para saber si es equilatero
		if(lado1==lado2&&lado2==lado3){
			printf("El triangulo tiene sus tres lados iguales es equilatero \n");
			printf("El perimetro del tirangulo es: %d \n",lado1+lado2+lado3);
		//compruebo que al menos dos de sus lados son iguales para saber si es isosceles
		}else if(lado1==lado2||lado1==lado3||lado2==lado3){
			printf("El triangulo tiene dos lados iguales es isosceles \n");
			printf("El perimetro del tirangulo es: %d \n",lado1+lado2+lado3);
			//si no es ninguno de los otros dos casos es un triangulo valido pero no tiene ninguno de sus lados iguales
		}else{
			printf("El triangulo no tiene ningun lado igual escaleno\n");
			printf("El perimetro del tirangulo es: %d \n",lado1+lado2+lado3);
			//si el primer if no entra muestro un mensaje de que el triangulo no es valido
	}	}else{
			printf("El triangulo no es un triangulo valido \n");
		}
	
}