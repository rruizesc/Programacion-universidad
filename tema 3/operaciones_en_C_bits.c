/* Nombre del programa: Operaciones en C bits
    Autor: Raul Ruiz Escribano
    Fecha: 04/10/2026*/

#include <stdio.h>

//no va a mostrar nada en el main porque no es de ningun tipo 
//main(void)
int main(void)

{
int ia, ib;
int ires;
double da, db;
double dres;
ia = 1;
ib = 3;
da = 2.3;
db = 3.7;
ires = ia + (ib*2 + ia*3); /* Ej 1 */
dres = ia + (ib*2 + ia*3); /* Ej 2 */
dres = ia + da*(ib/2.0 + ia/2.0); /* Ej 3 */
ires = ia + da*(ib/2.0 + ia/2.0); /* Ej 4 */
dres = -da*(ia + ib*(da + db/3.0)); /* Ej 5 */

//5
printf("%d\n",ires);

//-26.6800
printf("%f\n",dres);

//-26.6800
printf("%f\n",dres);

//5
printf("%d\n",ires);

//-26.6800
printf("%f\n",dres);
}