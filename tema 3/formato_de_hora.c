/* Nombre del programa: Formato de hora
    Autor: Raul Ruiz Escribano
    Fecha: 04/10/2026*/

#include <stdio.h>

void main(){

    int hora, minutos;

    printf("Introduce la hora (0-23): ");
    scanf("%d", &hora);

    printf("Introduce los minutos (0-59): ");
    scanf("%d", &minutos);

    if(hora >= 12){
        if(hora > 12){
            hora = hora - 12;
        }
        printf("%02d:%02d PM\n", hora, minutos);
    }
    else{
        if(hora == 0){
            hora = 12;
        }
        printf("%02d:%02d AM\n", hora, minutos);
    }
}