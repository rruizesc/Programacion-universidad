/* Nombre del programa: Calendario del mes
   Autor: Raul Ruiz Escribano
*/

#include <stdio.h>

// Devuelve 1 si el año es bisiesto y 0 si no
int esBisiesto(int fanio);
// Devuelve cuántos días tiene el mes (usa esBisiesto para febrero)
int diasDelMes(int fmes, int fanio);
// Dibuja el calendario de un mes con 'dias' días cuyo día 1 cae en
void imprimirCalendario(int fdias, int fdiaInicio);

int main(void){
	int bisiesto=0,mes=0,anio=0;
	int dia=0, diainicio=0;
	
	//recojo el mes, el anio y el dia de inicio del mes que el usuario introduce por parametro
	printf("Mes (1-12): ");
	scanf("%d",&mes);
	printf("Anno: ");
	scanf("%d",&anio);
	printf("Dia de la semana del dia 1 (1=lunes ... 7=domingo): ");
	scanf("%d",&diainicio);
	
	//compruebo que los datos introducidos estan bien si no muestro mensaje de error y el programa finaliza
	if(mes<1 || mes>12 || anio <=0 || diainicio<1 || diainicio>7){
		printf("Error: alguno de los datos no es valido \n");
	}else{
		//calculo los dias que tiene el mes
		dia=diasDelMes(mes,anio);
		
		//imprimo el calendario
		imprimirCalendario(dia,diainicio);
	}
	
}

int esBisiesto(int fanio){
	//si el resto al dividirlo por 4 o por 400 es 0 o al dividirlo por 100 da distinto de 0 entonces el anio es bisiesto 
	if((fanio % 4==0 && fanio % 100!=0) || fanio % 400==0){
		return 1;
	}else{
		return 0;
	}
}

int diasDelMes(int fmes, int fanio){
	int dias=0;
	//para los meses 1, 3, 5, 7, 8, 10 y 12 tiene 31 dias el mes
	if(fmes==1 || fmes==3 || fmes==5 || fmes==7 ||fmes==8 || fmes==10 || fmes==12){
		dias=31;
	
		//para los meses 4, 6, 9 y 11 tienen 30 dias el mes
	}else if(fmes==4 || fmes==6 || fmes==9 || fmes==11){
		dias=30;
		
		//si es el mes de febrero llamo a la funcion esBisiesto para saber si es bisiesto el año o no
	}else if(fmes==2){
		
		if(esBisiesto(fanio)==1){
			dias=29;
		}else{
			dias=28;
		}
	}
	return dias;
}

void imprimirCalendario(int fdias, int fdiaInicio){
	
	//imprimo los dias de la semana
	printf("  L  M  X  J  V  S  D\n");
	
	//dejo espacios en blanco antes del dia 1 para empezar en el dia correcto
	for(int i=1; i<fdiaInicio; i++){
		printf("   ");
	}
	
	//muestro todos los dias del mes
	for(int i=1; i<=fdias; i++){
		printf("%3d",i);
	
		//si hemos llegado al domingo saltamos de linea 
		if((fdiaInicio-1+i) % 7 ==0){
			printf("\n");
		}
	}
}
