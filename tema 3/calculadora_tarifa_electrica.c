/* Nombre del programa: Calculadora de tarifa electrica
    Autor: Raul Ruiz Escribano
    Fecha: 01/10/2026*/

#include <stdio.h>

#define horavalleM 22
#define horavallem 8
#define consumom 200

void main(){

    int consumo=0, hora=0, anos=0;
    float tarifa=0;

    int valle=0;
    int punta=0;
    int consumoBajo=0;

    printf("Introduce el consumo en kWh, la hora y los anos contratados separados por ,: ");
    scanf("%d,%d,%d", &consumo, &hora, &anos);

    // Comprobamos si la hora es valle o punta
    if(hora >= horavalleM || hora <= horavallem){
        valle=1;
    }else{
        punta=1;
    }

    // Comprobamos el consumo
    if(consumo <= consumom){
        consumoBajo=1;
    }

    // Aplicamos la tarifa correspondiente
    if(valle == 1 && consumoBajo == 1){
        tarifa=consumo*0.08;

    }else if(valle == 1 && consumoBajo == 0){
        tarifa=consumo*0.12;

    }else if(punta == 1 && consumoBajo == 1){
        tarifa=consumo*0.18;

    }else if(punta == 1 && consumoBajo == 0){
        tarifa=consumo*0.25;
    }

    // Descuento por antigüedad
    if(anos > 5){
        tarifa=tarifa*0.9;
        printf("El precio a pagar con el descuento de antiguedad es: %.2f\n", tarifa);
    }else{
        printf("El precio a pagar es de: %.2f\n", tarifa);
    }
}