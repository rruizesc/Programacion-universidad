/*  Nombre del programa: Carta de blackjack
    Autor: Raul Ruiz Escribano
    Fecha: 11/10/2026*/

#include <stdio.h>
//el include de <ctype.h es para poder poner el tolower o toupper para por si pone mayusculas que siempre sea minusculas 
#include <ctype.h>
//defino como valor fijo el valor del as y de las figuras 
#define as 11
#define figuras 10

void main(){
    char carta='\0', palo='\0';
    // Le pido al usuario que introduzca el valor y el palo de la carta separados por un guion
    printf("Introduce el valor y el palo(c-d-p-t) de la carta (valor-palo): ");
    scanf("%c-%c", &carta, &palo);

	//la funcion tolower lo que hace es poner en minuscula el texto introducido para que funcione tienes que incluir la libreria ctype.h
	carta=tolower(carta);
	palo=tolower(palo);
    // Compruebo que el valor de la carta es válido al poner el as como A el 10 como t y las figuras como J, Q y K 
    if(carta >= '2' && carta <='9' || carta == 'a' || carta == 't' || carta == 'j' || carta == 'q' || carta == 'k'){
            //Compruebo los palos de color rojo y escribo el color de la carta
            if(palo == 'c' || palo == 'd'){
                printf("Color de la carta: rojo\n");
				//compruebo los palos del color negro y en el caso de ser un palo erroneo muestro un mensaje de error
            }else if(palo == 'p'|| palo == 't'){
                printf("Color de la carta: negro\n");
            }else {
				printf("Ese palo no existe en la baraja\n");
			}
			//controlo los casos de las minusculas porque previamente he puesto tolower me aseguro que siempre sean minusculas 
                switch(carta){
                    case 'a':
                        printf("Figura: No\n");
                        printf("Valor de la carta: %d\n", as);
                        break;
						
                    case 't':
                        printf("Figura: No\n");
                        printf("Valor de la carta: %d\n", figuras);
                        break;
						
                    case 'j':
                        printf("Figura: Si\n");
                        printf("Valor de la carta: %d\n", figuras);
                        break;
					
                    case 'q':
                        printf("Figura: Si\n");
                        printf("Valor de la carta: %d\n", figuras);
                        break;
					
                    case 'k':
                        printf("Figura: Si\n");
                        printf("Valor de la carta: %d\n", figuras);
                        break;
						
                    default:
					//como carta es un char al poner el numero me sale su numero ascii correspondiente al restarlo por el char 0 que tiene valor 48 me daria el valor correspondiente
                        printf("Figura: No\n");
                        printf("Valor de la carta: %d\n", carta-'0');
                }
    }else {
        printf("Carta invertida, trampa\n");
    }
}