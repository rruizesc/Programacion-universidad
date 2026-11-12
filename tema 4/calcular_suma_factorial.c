/* Nombre del programa: Calcular la suma de N numeros naturales
   Autor: Raul Ruiz Escribano
   Fecha: 15/10/2026 */

#include <stdio.h>

void main() {
    int N = 0;
    int suma = 0;
    int correcto = 1;

    while (correcto) {
        printf("Introduce un numero natural: ");

        if (scanf("%d", &N) == 1 && N >= 0) {
            while (getchar() != '\n');
            correcto = 0;

            for (int i = 1; i <= N; i++) {
                suma = suma + i;
            }

            printf("La suma de los %d primeros numeros naturales es: %d\n",N, suma);
        } else {
            printf("El numero introducido no es valido.\n");
            while (getchar() != '\n');//limpio el buffer
			//reseto la variable
			N=0;
        }
    }
}
