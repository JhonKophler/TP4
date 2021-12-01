/*
Alumno: JUAN ADRIAN CORSO

Descripción:
    Escriba una función que devuelva la estación del año que se 
    ha leído del teclado.
    La función debe de ser del tipo declaradoen el ejercicio 2

Ejercicio 3 de la guia 4.
*/

#include<stdio.h>

enum estacionesDelAnio{ vacio, verano, otonio, invierno, primavera };

int main(){
    int n;
    printf("INGRESE UNA ESTACION A ELEJIR(1 A 4)\n");
    scanf("%d",&n);
    estacionesDelAnio(n);
}

int estacionesDelAnio(int num){

    enum estacionesDelAnio n;

    switch (num)
    {
    case verano:
        printf("ESTACION SELECCIONADA: 'VERANO' ");
        break;
    
    case otonio:
        printf("ESTACION SELECCIONADA: 'OTONIO' ");
        break;

    case invierno:
        printf("ESTACION SELECCIONADA: 'INVIERNO' ");
        break;

    case primavera:
        printf("ESTACION SELECCIONADA: 'PRIMAVERA' ");
        break;
    
    default:
        printf("INGRESE ELECCION CORRECTA(1 A 4)");
        break;
    }
}