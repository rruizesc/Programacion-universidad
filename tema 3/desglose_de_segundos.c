/* Nombre del programa: Desglose de segundos
    Autor: Raul Ruiz Escribano
    Fecha: 04/10/2026*/

#include <stdio.h>
#define semanast 604800
#define diast 86400
#define horast 3600
#define minutost 60
void main(){

    int segundos;
    int semanas, dias, horas, minutos;

    printf("Introduce una cantidad de segundos: ");
    scanf("%d", &segundos);

    semanas = segundos / semanast;
    segundos = segundos % semanast;

    dias = segundos / diast;
    segundos = segundos % diast;

    horas = segundos / horast;
    segundos = segundos % horast;

    minutos = segundos / minutost;
    segundos = segundos % minutost;

    printf("Semanas: %d\n", semanas);
    printf("Dias: %d\n", dias);
    printf("Horas: %d\n", horas);
    printf("Minutos: %d\n", minutos);
    printf("Segundos: %d\n", segundos);
}