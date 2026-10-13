/*  Nombre del programa: Maquina expendedora
    Autor: Raul Ruiz Escribano
    Fecha: 12/10/2026*/

#include <stdio.h>

void main(){
	int precio=0,dinero=0,cambio=0,monedas=0;
	
	printf("Precio (centimos): ");
	scanf("%d",&precio);
	printf("Dinero introducido (centimos): ");
	scanf("%d",&dinero);
	
	if(precio<dinero){
		//calculo el cambio a devolver
		cambio=dinero-precio;
		printf("Cambio: %d centimos \n",cambio);
		//calculo las monedas de 200 y le resto la cantidad al cambio
		monedas=cambio/200;
		cambio=cambio%200;
		printf("%d moneda(s) de 200 \n",monedas);
		//calculo las monedas de 100 y le resto la cantidad al cambio
		monedas=cambio/100;
		cambio=cambio%100;
		printf("%d moneda(s) de 100 \n",monedas);
		//calculo las monedas de 50 y le resto la cantidad al cambio
		monedas=cambio/50;
		cambio=cambio%50;
		printf("%d moneda(s) de 50 \n",monedas);
		//calculo las monedas de 10 y le resto la cantidad al cambio
		monedas=cambio/10;
		cambio=cambio%10;
		printf("%d moneda(s) de 10 \n",monedas);
		//calculo las monedas de 5
		monedas=cambio/5;
		printf("%d moneda(s) de 5 \n",monedas);
	}else{
		//calculo cuantas monedas le faltan 
		monedas=precio-dinero;
		printf("Dinero insuficiente faltan %d centimos",monedas);
	}
}