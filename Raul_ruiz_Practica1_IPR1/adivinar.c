
/* Nombre del programa: Adivinar
   Autor: Raul Ruiz Escribano
*/

#include <stdio.h>

// Prototipos de las funciones
int puntoMedio(int minimo, int maximo);
void actualizarIntervalo(char respuesta, int medio, int *minimo, int *maximo);
void mostrarVeredicto(int intentos);
char leerRespuesta();

int main(void) {

    int Miminimo=1, Mimaximo=100, medio=0;

    // Variables para controlar los intentos y si el ordenador ha acertado
    int intentos=0, acierto=0;

    char respuesta='\0';

    // Indicamos al usuario que piense un número entre 1 y 100
    printf("Piensa un numero del 1 al 100.\n");

    // El programa continúa mientras no se superen los 7 intentos,
    // no se haya acertado y el intervalo siga teniendo números posibles
    while(intentos < 7 && acierto==0 && Miminimo <= Mimaximo){

        // Calculamos el punto medio del intervalo actual
        medio = puntoMedio(Miminimo, Mimaximo);

        // Aumentamos el contador de intentos
        intentos++;

        // Mostramos el intento y el número que propone el ordenador
        printf("Intento %d: es el %d (< menor, > mayor, = acierto): ", intentos, medio);

        // Pedimos al usuario una respuesta válida
        respuesta = leerRespuesta();

        // Comprobamos si el ordenador ha acertado
        if(respuesta == '='){
            acierto=1; 
        }
        else{
            // Actualizamos el intervalo según la respuesta del usuario
            actualizarIntervalo(respuesta, medio, &Miminimo, &Mimaximo);
        }
    }

    // Comprobamos si el ordenador ha conseguido adivinar el número
    if(acierto==1){

        printf("He acertado en %d intentos.\n", intentos);

        // Mostramos el comentario según el número de intentos
        mostrarVeredicto(intentos);
    }
    // Si se han agotado los 7 intentos, el ordenador se rinde
    else if(intentos==7){

        printf("Me rindo, no se que numero era\n");
    }
    // Si el mínimo supera al máximo, el intervalo está vacío
    // Esto significa que el usuario se ha contradicho
    else if(Miminimo > Mimaximo){

        printf("Imposible has mentido en alguna respuesta\n");
    }

    return 0;
}


// Calcula y devuelve el punto medio del intervalo
int puntoMedio(int minimo, int maximo){

    int puntomedio=0;

    // Sumamos el mínimo y el máximo y dividimos entre 2
    puntomedio=(minimo+maximo)/2;

    return puntomedio;
}


// Pide una respuesta al usuario hasta que introduzca un carácter válido
char leerRespuesta(){

    char caracter='\0';

    do{
        scanf("%c", &caracter);
        while(getchar() != '\n');// Limpiamos el buffer de entrada

        // Comprobamos que la respuesta sea '<', '>' o '='
        if(caracter != '<' && caracter != '>' && caracter != '='){
            printf("Respuesta no valida introduce <, > o = ");
        }

    // Repetimos mientras el carácter no sea válido
    } while(caracter != '<' && caracter != '>' && caracter != '=');

    return caracter;
}


// Actualiza los límites del intervalo según la respuesta del usuario
void actualizarIntervalo(char respuesta, int medio, int *minimo, int *maximo){

    // Si el número pensado es menor que el propuesto,
    // reducimos el máximo a medio - 1
    if(respuesta == '<'){
        *maximo=medio-1;
    }
    // Si el número pensado es mayor que el propuesto,
    // aumentamos el mínimo a medio + 1
    else if(respuesta == '>'){
        *minimo=medio+1;
    }
}


// Muestra un comentario dependiendo del número de intentos utilizados
void mostrarVeredicto(int intentos){

    // Si ha necesitado 3 intentos o menos
    if(intentos<=3){
        printf("Increible\n");
    }
    // Si ha necesitado entre 4 y 6 intentos
    else if(intentos<=6){
        printf("Nada mal");
    }
    // Si ha necesitado los 7 intentos
    else{
        printf("Por los pelos");
    }
}
