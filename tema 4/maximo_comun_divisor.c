/* Nombre del programa: Maximo comun divisor
   Autor: Raul Ruiz Escribano
*/

#include <stdio.h>

int main() {
    int num1=0, num2=0;
    int resto=0, mayor=0, menor=0;

//va a entrar al menos una vez y si la condicion no se cumple volvera a pedir el numero positivo hasta que se cumpla
    do {
        printf("Introduce el primer numero positivo: ");
        scanf("%d", &num1);
		while(getchar() != '\n');

        printf("Introduce el segundo numero positivo: ");
        scanf("%d", &num2);
		while(getchar() != '\n');

        if (num1 <= 0 || num2 <= 0) {
            printf("Los dos numeros deben ser positivos.\n");
        }
    } while (num1 <= 0 || num2 <= 0);

//como no se cual de los dos numeros que va a introducir es el mayor
//compruebo cual es el mayor de los dos y lo pongo en la variable mayor lo mismo para el menor
    if (num1 > num2) {
        mayor = num1;
        menor = num2;
    } else {
        mayor = num2;
        menor = num1;
    }

//bucle para calcular el MCD calculando el resto hasta que su valor sea 0 
    do {
		//calculo el resto de la division
        resto = mayor % menor;
		
		//cambio el numero mayor a el menor
        mayor = menor;
		
		//cambio el valor del menor al resto
        menor = resto;
    } while (resto != 0);

    printf("El MCD es: %d\n", mayor);

    return 0;
}
