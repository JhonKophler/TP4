#include <stdio.h>
#include <string.h>
struct fecha
{
    int dia, mes, anio
};
struct gente
{
    char nombre[20];
    struct fecha f_nacimiento;
};
void main(void)
{
    struct gente pers;
    struct fecha fn;
    printf("Ingrese nombre: ");
    gets(pers.nombre);
    printf("Ingrese dia de nacimiento: ");
    scanf("%d", &fn.dia);
    printf("Ingrese mes de nacimiento: ");
    scanf("%d", &fn.mes);
    printf("Ingrese anio de nacimiento: ");
    scanf("%d", &fn.anio);
    pers.f_nacimiento = fn;
    printf("%i",pers.f_nacimiento);
}
//pueden poner el año??