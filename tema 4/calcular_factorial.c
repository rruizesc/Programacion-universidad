/* Nombre del programa: Calcular el factorial de un numero
    Autor: Raul Ruiz Escribano
    Fecha: 15/10/2026*/

#include <stdio.h>

void main() {
    int N = 0;
    int factorial = 1;

    printf("Introduce un numero entero: ");
    scanf("%d", &N);
	// 
    for (int i = 1; i <= N; i++) {
        factorial = factorial * i;
    }

    printf("El factorial de %d es: %d\n", N, factorial);
}

