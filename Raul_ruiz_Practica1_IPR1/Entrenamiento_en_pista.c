/* Nombre del programa: Entrenamiento en pista
   Autor: Raul Ruiz Escribano
*/

#include <stdio.h>

// Pide un tiempo hasta que sea válido (>= 0) y lo devuelve (0 =fin)
int leerTiempo(int vueltas);

// Devuelve la media (0 si no hay vueltas)
float calcularMedia(int suma, int vueltas);

// Devuelve 1 si el tiempo actual es menor que el anterior
int esMejora(int anterior, int actual);

// Actualiza las estadísticas con una nueva vuelta (paso por referencia):
// mejor, peor, suma de tiempos y cuántas vueltas han sido menores de 90 s.
// 'vueltas' es el número de vuelta actual (1 para la primera).
// Devuelve 1 si esta vuelta es un nuevo mejor tiempo y 0 si no
int registrarVuelta(int tiempo, int vueltas, int *mejor, int *peor,int *suma, int *bajo90);

int main(void) {

    int tiempo = 0;
    int anterior = 0;
    int mejor = 0, peor = 0;
    int suma = 0;
    int vueltas = 0;
    int bajo90 = 0;
    int rachaActual = 0, rachaMaxima = 0;

    // Leemos los tiempos hasta que se introduzca 0 y le paso la vuelta + 1 para mostrar por pantalla
    tiempo = leerTiempo(vueltas+1);

    while (tiempo != 0) {

        vueltas++;

        // Registramos los datos de la vuelta
        if (registrarVuelta(tiempo, vueltas, &mejor, &peor, &suma, &bajo90) == 1) {
            printf("Nuevo mejor tiempo!\n");
        }

        // Comprobamos si hemos mejorado respecto a la vuelta anterior
        if (vueltas > 1) {

            if (esMejora(anterior, tiempo) == 1) {
                rachaActual++;

                if (rachaActual > rachaMaxima) {
                    rachaMaxima = rachaActual;
                }
            }else {
                rachaActual = 0;
            }
        }

        // Guardamos el tiempo actual para compararlo con el siguiente
        anterior = tiempo;

        // Leemos el siguiente tiempo y le paso el numero de vueltas + 1 para mostrar por pantalla
        tiempo = leerTiempo(vueltas+1);
    }

    // Mostramos los resultados
    if (vueltas == 0) {
        printf("Sin vueltas registradas.\n");
    }else {
        printf("\nNumero de vueltas: %d\n", vueltas);
        printf("Mejor tiempo: %d segundos\n", mejor);
        printf("Peor tiempo: %d segundos\n", peor);
        printf("Tiempo medio: %.1f segundos\n", calcularMedia(suma, vueltas));
        printf("Vueltas por debajo de 90 segundos: %d\n", bajo90);
        printf("Mayor racha de mejoras: %d\n", rachaMaxima);
    }

    return 0;
}


// Pide un tiempo hasta que sea valido (mayor o igual que 0)
int leerTiempo(int vueltas) {

    int tiempo = -1;

    printf("Introduce el tiempo de la vuelta %d (0 para terminar): ",vueltas);
    scanf("%d", &tiempo);

    while (tiempo < 0) {
        printf("Tiempo no valido. Introduce un tiempo positivo o 0: ");
        scanf("%d", &tiempo);
    }

    return tiempo;
}

// Calcula la media de los tiempos
float calcularMedia(int suma, int vueltas) {

    if (vueltas == 0) {
        return 0;
		
    }else {
        return (float)suma / vueltas;
    }
}


// Devuelve 1 si el tiempo actual es menor que el anterior
int esMejora(int anterior, int actual) {

    if (actual < anterior) {
        return 1;
		
    }else {
        return 0;
    }
}


// Registra los datos de una vuelta
int registrarVuelta(int tiempo, int vueltas, int *mejor, int *peor,int *suma, int *bajo90) {

    int nuevoMejor = 0;

    // Si es la primera vuelta, inicializamos mejor y peor
    if (vueltas == 1) {
        *mejor = tiempo;
        *peor = tiempo;
        nuevoMejor = 1;
		
    }else {

        // Comprobamos si es un nuevo mejor tiempo
        if (tiempo <*mejor) {
            *mejor = tiempo;
            nuevoMejor = 1;
        }

        // Comprobamos si es el peor tiempo
        if (tiempo >*peor) {
            *peor = tiempo;
        }
    }

    // Sumamos el tiempo para calcular posteriormente la media
    *suma =*suma + tiempo;

    // Contamos las vueltas inferiores a 90 segundos
    if (tiempo < 90) {
        *bajo90 =*bajo90 + 1;
    }

    return nuevoMejor;
}