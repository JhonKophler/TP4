/*
Alumno: JUAN ADRIAN CORSO

Descripción:
Encuentre los errores en la siguiente declaración de estructura 
y posterior definición de variable.

Ejercicio 1 de la guia 4.
*/


#include<stdio.h>

struct hormiga{
    int patas;
    char especie[41];
    float tiempo;
};
hormiga colonia[100]; //==> MODO MAL

int main(){
    struct hormiga colonia[100]; //==> MODO BIEN
}

//EL ERROR ESTA EN QUE LA ESTRUCTURA SE DECLARA FUERA DEL MAIN
//MIENTRAS QUE DECLARAR LA VARIABLE DE TIPO STRUCT SE TIENE QUE 
//HACER EN EL MAIN O EN LA FUNCION EN LA CUAL SE LA VA A UTILIZAR
//Y SE DECLARA CON LA PALABRA: struct nombreEstructura nombreVariable.