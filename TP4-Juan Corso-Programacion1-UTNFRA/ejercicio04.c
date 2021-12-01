/*
Alumno: JUAN ADRIAN CORSO

Descripción:
 Declara un tipo de dato enumerado para representar los meses del año; 
 el mes enero debe estar asociado al dato entero 1,
 y así sucesivamente los demás meses.

Ejercicio 4 de la guia 4.
*/

#include<stdio.h>

enum mesesDelAnio{ vacio, enero, febrero , marzo, abril, mayo, junio, julio, 
agosto, septiembre, octubre, noviembre, diciembre };


int main(){

    enum mesesDelAnio opcion;
    printf("INGRESE UN MES A ELEJIR(1 A 12)\n");
    scanf("%d",&opcion);

    switch (opcion)
    {
    case enero:
        printf("MES SELECCIONADO: 'ENERO' ");
        break;
    
    case febrero:
        printf("MES SELECCIONADO: 'FEBRERO' ");
        break;

    case marzo:
        printf("MES SELECCIONADO: 'MARZO' ");
        break;

    case abril:
        printf("MES SELECCIONADO: 'ABRIL' ");
        break;

    case mayo:
        printf("MES SELECCIONADO: 'MAYO' ");
        break;

    case junio:
        printf("MES SELECCIONADO: 'JUNIO' ");
        break;

    case julio:
        printf("MES SELECCIONADO: 'JULIO' ");
        break;

    case agosto:
        printf("MES SELECCIONADO: 'AGOSTO' ");
        break;

    case septiembre :
        printf("MES SELECCIONADO: 'SEPTIEMBRE' ");
        break;

    case octubre:
        printf("MES SELECCIONADO: 'OCTUBRE' ");
        break;

    case noviembre:
        printf("MES SELECCIONADO: 'NOVIEMBRE' ");
        break;

    case diciembre:
        printf("MES SELECCIONADO: 'DICIEMBRE' ");
        break;
    
    default:
        printf("INGRESE MES CORRECTO(1 A 12)");
        break;
    }

}