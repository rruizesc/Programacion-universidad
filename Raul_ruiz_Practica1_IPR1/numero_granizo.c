/* Nombre del programa: Numero granizo
   Autor: Raul Ruiz Escribano
*/

#include <stdio.h>

// Muestra la secuencia desde n hasta 1 (separada por espacios)
void mostrarSecuencia(int n);

// Devuelve cuántos pasos hay desde n hasta 1 (0 si n ya es 1)
int contarPasos(int n);

// Devuelve el mayor valor de la secuencia que parte de n
int maximoSecuencia(int n);

int main(void) {

    int numero=0;

    printf("Numero (0 para salir): ");
    scanf("%d", &numero);

    while (numero != 0) {

        if (numero < 0) {
            printf("Error: debe ser positivo.\n");
			
        }else {
            printf("Secuencia: ");
            mostrarSecuencia(numero);
            printf("\n");

            printf("Pasos: %d\n", contarPasos(numero));
            printf("Maximo: %d\n", maximoSecuencia(numero));
        }

        printf("\nNumero (0 para salir): ");
        scanf("%d", &numero);
    }

    return 0;
}


// Muestra la secuencia de numeros hasta que llega a 1
void mostrarSecuencia(int n) {

    printf("%d ", n);

    if (n != 1) {

        if (n % 2 == 0) {
            mostrarSecuencia(n / 2);
			
        }else {
            mostrarSecuencia(3 * n + 1);
        }
    }
}


// Cuenta los pasos necesarios para llegar a 1
int contarPasos(int n) {

    if (n == 1) {
        return 0;
		
    }else {

        if (n % 2 == 0) {
            return 1 + contarPasos(n / 2);
			
        }else {
            return 1 + contarPasos(3 * n + 1);
        }
    }
}


// Devuelve el valor máximo de toda la secuencia
int maximoSecuencia(int n) {

    int siguiente=0;
    int maximo=0;

    if (n == 1) {
        return 1;//si n=1 no hay pasos que dar el maximo es 1
		
    }else {
        if (n % 2 == 0) {
            siguiente = n / 2;
			
        }else {
            siguiente = 3 * n + 1;
        }

        maximo = maximoSecuencia(siguiente);

        if (n > maximo) {
            return n;
			
        }else {
            return maximo;
        }
    }
}