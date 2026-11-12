/* Nombre del programa: Catalogo de productos en un almacen
    Autor: Raul Ruiz Escribano
    Fecha: 15/10/2026*/

#include <stdio.h>
#include <ctype.h>

void main() {
    int peso=0, pesototal=0,pesototalalmacen=0;
	int totalestanterias=0,caja=1;
	char salida='s';
	
	//bucle para terminar el programa si no es s
	while(salida=='s'){
		//reseteo las variables para la proxima estanteria
		pesototal=0;
		peso=0;
		caja=1;
		
		//bucle para que si no introduce que el peso sea -1 continue en el bucle 
		totalestanterias++;
		printf("\n--- Estanteria %d --- \n",totalestanterias);
		
		while(peso!=-1){
			printf("Peso de la caja %d(-1 para terminar la estanteria): ",caja);
			scanf("%d",&peso);
			while(getchar() != '\n');
			//si pone un peso negativo que sea menor que -1 le muestro un mensaje de error si no sumo el contador y el peso total 
			if(peso<-1){
				printf("Ese no es un peso valido\n");
			}else{
			caja++;
			pesototal+=peso;
			}
		}
		//imprimo el peso total de la estanteria y sumo el total del almacen al de la estanteria
		printf("Peso total de la estanteria: %d kg\n",pesototal+1);
		pesototalalmacen=pesototalalmacen+pesototal+1;
		
		//Le pido si hay o no otra estanteria
		printf("Hay otra estanteria (s/n): ");
		scanf("%c",&salida);
		while(getchar() != '\n');
		//por si escribe una mayuscula que se ponga en minuscula con tolower necesitas #include <ctype.h>
		salida=tolower(salida);
		
		//en el caso de que escriba un valor que no sea ni s ni n entra en el while hasta que escriba un valor que sea s o n
		while(salida != 's' && salida!='n'){
		//compruebo si hay o no otra estanteria
		printf("Hay otra estanteria (s/n): ");
		scanf("%c",&salida);
		while(getchar() != '\n');
		//por si escribe una mayuscula que se ponga en minuscula con tolower necesitas #include <ctype.h>
		salida=tolower(salida);
		}
		
}
	//muestro el peso total del almacen
	printf("Peso total del almacen es: %d kg ",pesototalalmacen);
}

