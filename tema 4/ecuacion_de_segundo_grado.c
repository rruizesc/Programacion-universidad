/* Nombre del programa: Raices de una ecuacion de segundo grado
   Autor: Raul Ruiz Escribano
   */

#include <stdio.h>
#include <math.h>

int main() {
    double a=0, b=0, c=0;
    double op=0, x1=0, x2=0;
	double parteReal=0, parteImaginaria=0;

    printf("Introduce el coeficiente a: ");
    scanf("%lf", &a);

    printf("Introduce el coeficiente b: ");
    scanf("%lf", &b);

    printf("Introduce el coeficiente c: ");
    scanf("%lf", &c);

	//si a = 0 el divisor se va a multiplicar por 0 y no es posible dividir un numero por 0 
    if (a == 0) {
        printf("No es una ecuacion de segundo grado.\n");
    } else {
		//calculo la parte de la raiz cuadrada
        op = b * b - 4 * a * c;

        if (op > 0) {
            x1 = (-b + sqrt(op)) / (2 * a);
            x2 = (-b - sqrt(op)) / (2 * a);

            printf("Primera raiz: %.2f\n", x1);
            printf("Segunda raiz: %.2f\n", x2);
        } else if (op == 0) {
            x1 = -b / (2 * a);

            printf("Raiz doble: %.2f\n", x1);
			
		//no hay solucion en el campo de los reales 
        } else {
            printf("No existen raices reales.\n");
			
			printf("\n la parte imaginaria es: \n");
			parteReal = -b / (2 * a);
			parteImaginaria = sqrt(-op) / (2 * a);

			printf("Primera raiz: %.2f + %.2fi\n",parteReal, parteImaginaria);
			printf("Segunda raiz: %.2f - %.2fi\n",parteReal, parteImaginaria);
        }
    }

    return 0;
}
