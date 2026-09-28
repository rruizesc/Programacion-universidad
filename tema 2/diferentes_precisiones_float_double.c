/*Nombre del programa: division entre dos variables float y double con diferentes precisiones
  Autor: Raul Ruiz Escribano
  Fecha: 23-09-2026
*/

#include <stdio.h>

//Escribo las funciones de mi programa
float CalcularDivisionFloat(float a, float b);
double CalcularDivisionDouble(double a, double b);

void main(){

//Declaro las variables
    float NumeradorFloat=1.0, DenominadorFloat=3.0, ResultadoDivisionFloat=0.0;
    double NumeradorDouble=1.0, DenominadorDouble=3.0, ResultadoDivisionDouble=0.0;

//Calculo la division de los numeros float y double
    ResultadoDivisionFloat=CalcularDivisionFloat(NumeradorFloat, DenominadorFloat);
    ResultadoDivisionDouble=CalcularDivisionDouble(NumeradorDouble, DenominadorDouble);

    //Muestro los resultados por pantalla
    printf("Float %f/%f es: %f\n", NumeradorFloat, DenominadorFloat, ResultadoDivisionFloat);
    printf("Double %f/%f es: %f\n", NumeradorDouble, DenominadorDouble, ResultadoDivisionDouble);

    //Muestro los resultados con 6 decimales
    printf("Float (6 decimales) %.6f/%.6f : %.6f\n", NumeradorFloat, DenominadorFloat, ResultadoDivisionFloat);
    printf("Double (6 decimales) %.6f/%.6f : %.6f\n", NumeradorDouble, DenominadorDouble, ResultadoDivisionDouble);

    //Muestro los resultados con 15 decimales
    printf("Float (15 decimales) %.15f/%.15f : %.15f\n", NumeradorFloat, DenominadorFloat, ResultadoDivisionFloat);
    printf("Double (15 decimales) %.15f/%.15f : %.15f\n", NumeradorDouble, DenominadorDouble, ResultadoDivisionDouble);

    //Muestro los resultados con 30 decimales
    printf("Float (30 deciamles) %.30f/%.30f : %.30f\n", NumeradorFloat, DenominadorFloat, ResultadoDivisionFloat);
    printf("Double (30 decimales) %.30f/%.30f : %.30f\n", NumeradorDouble, DenominadorDouble, ResultadoDivisionDouble);
}

//Defino las funciones para calcular la division de los numeros float y double
float CalcularDivisionFloat(float numerador, float denominador){
    float resultado=0.0;
    resultado=numerador/denominador;
    return resultado;
}

double CalcularDivisionDouble(double numerador, double denominador){
    double resultado=0.0;
    resultado=numerador/denominador;
    return resultado;
}