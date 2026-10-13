/*  Nombre del programa: Puedo subir
    Autor: Raul Ruiz Escribano
    Fecha: 12/10/2026*/

#include <stdio.h>

void main(){
	int edad=0,altura=0,acompanado=0,problemas=0;
	
	printf("Edad: ");
	scanf("%d",&edad);
	printf("Altura: ");
	scanf("%d",&altura);
	printf("Estas acompanado de algun adulto (1/0): ");
	scanf("%d",&acompanado);
	printf("Tienes algun problema de espalda (1/0): ");
	scanf("%d",&problemas);
	
	//condicion de la montaña rusa
	if(altura>=140 && problemas==0 && edad>=15 || altura>=140 && problemas==0 && edad<14 && acompanado==1){
		printf("Montana rusa: Si \n");
	}else{
		printf("Montana rusa: No \n");
	}
	
	//condicion de la casa del terror
	if(edad>=12 || acompanado==1){
		printf("Casa del terror: Si \n");
	}else {
		printf("Casa del terror: No \n");
	}
	
	//condicion de las tazas giratorias
	if(altura>=90 && altura<=190){
		printf("Tazas giratorias: Si \n");
	}else{
		printf("Tazas giratorias: No \n");
	}
	
	//condicion de la entrada gratis
	if(edad<4 || edad>=65){
		printf("Entrada gratis: Si \n");
	}else{
		printf("Entrada gratis: No \n");
	}
}