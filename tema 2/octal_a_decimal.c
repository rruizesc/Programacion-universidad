/* Nombre del programa: Conversion de octal a decimal
    Autor: Raul Ruiz Escribano
    Fecha: 26/09/2026*/


#include <stdio.h>

void main(){
	//declaro las variables
	int ip1=0,ip2=0,ip3=0,ip4=0;
	
	//recojo el numero introducido por el usuario
	printf("Introduzca la ip en octal: ");
	scanf("%o.%o.%o.%o",&ip1, &ip2, &ip3, &ip4);
	
	//muestro la ip en decimal
	printf("Tu Direccion ip es: %d.%d.%d.%d \n",ip1,ip2,ip3,ip4);
	
}