/* Nombre del programa: Operaciones con numeros reales
    Autor: Raul Ruiz Escribano
    Fecha: 04/10/2026*/
	
#include <stdio.h>

void main(){

    float num1, num2;

    printf("Introduce el primer numero: ");
    scanf("%f", &num1);

    printf("Introduce el segundo numero: ");
    scanf("%f", &num2);

    printf("Suma: %.2f\n", num1 + num2);
    printf("Resta: %.2f\n", num1 - num2);
    printf("Multiplicacion: %.2f\n", num1 * num2);
    printf("Division: %.2f\n", num1 / num2);
}