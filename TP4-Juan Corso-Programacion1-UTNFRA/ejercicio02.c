/*
Alumno: JUAN ADRIAN CORSO

Descripción:
  Declare una tipo de datos para representar las 
  estaciones del año

Ejercicio 2 de la guia 4.
*/

#include<stdio.h>

enum estacionesDelAnio{ vacio, verano, otonio, invierno, primavera };

int main(){

    enum estacionesDelAnio opcion;
    printf("INGRESE UNA ESTACION A ELEJIR(1 A 4)\n");
    scanf("%d",&opcion);

    switch (opcion)
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