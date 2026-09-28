/*  Nombre del programa: Cálculo de área y volumen de un cilindro
    Autor: Raul ruiz escribano
    Fecha: 19-09-2026*/
	
// Directivas  de preprocesador
#include <stdio.h>
#define PI 3.14

// Prototipo de funciones
int calcular_area(float radio);
int calcular_volumen(float radio, float altura);

//Funcion Principal Main 
int main(){
    float radio=0.0, altura=0.0;
    float area=0.0, volumen=0.0;

    printf("Introduce el radio del cilindro: ");
    scanf(" %f", &radio);
    printf("Introduce la altura del cilindro: ");
    scanf(" %f", &altura);

    area = calcular_area(radio);
    volumen = calcular_volumen(radio, altura);

    printf("El area de la base del cilindro es: %f\n", area);
    printf("El volumen del cilindro es: %f\n", volumen);
}

//Codificacion de funciones
int calcular_area(float radio){
    return PI * (radio * radio);
}

int calcular_volumen(float radio, float altura){
    return calcular_area(radio) * altura;
}