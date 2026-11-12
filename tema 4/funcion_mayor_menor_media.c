/* Nombre del programa: Calcular el mas grande, el mas pequeno y la media
   Autor: Raul Ruiz Escribano
*/

#include <stdio.h>
int Mayor(int a[], int b);
int Menor(int a[], int b);
float Media(int a[], int b);

int main(void) {
    int n=0;
    int mayor=0, menor=0;
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

	//array de los n numeros pasados por parametro 
    int numeros[n];
	
//hago que introduzca numeros hasta la misma cantidad de numeros que va a introducir
    do {
        printf("Introduce el numero %d: ", i);
        scanf("%d", &numeros[i-1]);
		while(getchar() != '\n');
        i++;

    } while (i <= n);
	
	mayor=Mayor(numeros,n);
	menor=Menor(numeros,n);
	media=Media(numeros,n);

    printf("El numero mayor es: %d\n", mayor);
    printf("El numero menor es: %d\n", menor);
    printf("La media es: %.2f\n", media);
}

//funcion para devolver el numero mayor de entre todos los numeros pasados por parametro
int Mayor(int a[], int b) {
    int mayor = a[0];

    for (int i = 1; i < b; i++) {
        if (a[i] > mayor) {
            mayor = a[i];
        }
    }

    return mayor;
}

//funcion para devolver el numero menor de entre todos los numeros pasados por parametro 
int Menor(int a[], int b) {
    int menor = a[0];

    for (int i = 1; i < b; i++) {
        if (a[i] < menor) {
            menor = a[i];
        }
    }

    return menor;
}

//funcion para devolver la media de entre los numeros pasados por parametro 
float Media(int a[], int b) {
    int suma = 0;
	float media=0;

    for (int i = 0; i < b; i++) {
        suma = suma + a[i];
    }
	//como suma es un int tengo que pasarlo a float para que el resultado sea un float
	media=(float)suma / b;
	
    return media;
}