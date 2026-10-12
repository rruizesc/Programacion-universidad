/* Nombre del programa: Operaciones con enteros
    Autor: Raul Ruiz Escribano
    Fecha: 04/10/2026*/

#include <stdio.h>

void main(){

    int num1, num2;

    printf("Introduce el primer numero: ");
    scanf("%d", &num1);

    printf("Introduce el segundo numero: ");
    scanf("%d", &num2);

    printf("Suma: %d\n", num1 + num2);
    printf("Resta: %d\n", num1 - num2);
    printf("Multiplicacion: %d\n", num1 * num2);
    printf("Division: %d\n", num1 / num2);
    printf("Resto: %d\n", num1 % num2);
}