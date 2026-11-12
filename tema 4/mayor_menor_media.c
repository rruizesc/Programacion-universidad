/* Nombre del programa: Calcular el mas grande, el mas pequeno y la media
   Autor: Raul Ruiz Escribano
*/

#include <stdio.h>

int main(void) {
    int n=0;
    int numero=0;
    int mayor=0, menor=0;
    int suma = 0;
    int i = 1;
    float media=0;

//Pido cuantos valores va a introducir
    do {
        printf("Cuantos numeros vas a introducir: ");
        scanf("%d", &n);
		while(getchar() != '\n');

        if (n <= 0) {
            printf("El numero debe ser mayor que 0.\n");
        }
    } while (n <= 0);

//hago que introduzca numeros hasta la misma cantidad de numeros que va a introducir
    do {
        printf("Introduce el numero %d: ", i);
        scanf("%d", &numero);
		while(getchar() != '\n');

        if (i == 1) {
            mayor = numero;
            menor = numero;
        } else {
            if (numero > mayor) {
                mayor = numero;
            }

            if (numero < menor) {
                menor = numero;
            }
        }

        suma = suma + numero;
        i++;

    } while (i <= n);

    media = (float)suma / n;

    printf("El numero mayor es: %d\n", mayor);
    printf("El numero menor es: %d\n", menor);
    printf("La media es: %.2f\n", media);

    return 0;
}
