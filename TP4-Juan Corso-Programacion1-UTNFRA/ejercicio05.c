/*
Alumno: JUAN ADRIAN CORSO

Descripción:
    Encuentra los errores del siguiente código

Ejercicio 5 de la guia 4.
*/

#include<stdio.h>

void escribe(struct fecha f);

int main(){
    struct fecha
    {
        int dia;
        int mes;
        int anio;
        char mes[];
    }ff;
    ff = { 1, 1 , 2000, "ENERO"};
    escribe(ff);
    return 1;

}

//EL ERROR PRINCIPAL ES QUE EN LA LINEA 12 
//SE DECLARA UNA FUNCION, CON PARAMETRO DE STRUCT
//PERO EN EL MAIN SE DECLARA LA STRUCT Y NO SE DEFINE LA FUNCION
//