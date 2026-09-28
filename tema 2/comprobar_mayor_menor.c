/* Nombre del programa: comprobar el numero si es mayor o menor
    Autor: Raul Ruiz Escribano
    Fecha: 24/09/2026*/


#include <stdio.h>

void main(){
	//declaro las variables
	int num=0,num2=0,comprobar_datos=0;
	
	printf("Introduzca dos numeros enteros: ");
	comprobar_datos=scanf("%d %d", &num,&num2);
	
	if(comprobar_datos==2){
		if(num>num2){
			printf("Tu primer numero: %d es mayor que tu segundo numero: %d  %d>%d \n", num,num2,num,num2);
		}else{
			printf("Tu segundo numero: %d es mayor que tu primer numero: %d  %d>%d \n", num2,num,num2,num);
		}
	}else{
		printf("Alguno de los datos que has escrito no es un entero");
	}
}