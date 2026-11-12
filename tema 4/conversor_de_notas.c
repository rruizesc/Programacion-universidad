/* Nombre del programa: Conversor de notas numericas a calificacion
    Autor: Raul Ruiz Escribano
    Fecha: 06/10/2026*/
	
#include <stdio.h>

void main(){

    int nota=0;

    printf("Introduce tu nota (0-10): ");
    scanf("%d", &nota);

    switch(nota){
	//para los 5 casos del 0 al 4 imprimo el mismo mensaje
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            printf("Suspenso\n");
            printf("No te rindas, sigue trabajando y la proxima vez lo conseguiras.\n");
            break;

        case 5:
            printf("Aprobado\n");
            printf("Bien hecho, has conseguido aprobar. Sigue mejorando.\n");
            break;

        case 6:
            printf("Bien\n");
            printf("Buen trabajo, puedes seguir avanzando.\n");
            break;

	//para los 2 casos el 7 y 8 imprimo el mismo mensaje
        case 7:
        case 8:
            printf("Notable\n");
            printf("Muy buen trabajo, sigue asi y puedes llegar aun mas lejos.\n");
            break;

        case 9:
            printf("Sobresaliente\n");
            printf("Excelente trabajo, tu esfuerzo esta dando resultados.\n");
            break;

        case 10:
            printf("Matricula de Honor\n");
            printf("Increible trabajo, has alcanzado la maxima calificacion.\n");
            break;

        default:
            printf("Nota no valida\n");
            printf("La nota debe estar entre 0 y 10.\n");
    }
}