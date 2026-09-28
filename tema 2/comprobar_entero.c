/* Nombre del programa: comprobar el entero introducido
    Autor: Raul Ruiz Escribano
    Fecha: 24/09/2026*/


#include <stdio.h>

void main(){
	//declaro las variables
	int numero=0;
	int numero2=0,Result_scanf=0;
	
	//Compruebo que lo que leo es un dato %d si pone un float le pondria el numero sin los numeros de la coma 
	printf("Introduce un entero: ");
	if(scanf("%d", &numero)!=0){
	printf("el numero introducido es: %d \n", numero);
	}else{
		printf("No has introducido un entero");
	}

//otra solucion
	printf("Introduce un entero: ");
	Result_scanf=scanf("%d", &numero2);
	if(Result_scanf=1){
		printf("Tu numero es %d",numero2);
	}else{
		printf("No has escrito un numero");
	}
}