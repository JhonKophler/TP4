#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
   struct clientes
   {
      char nombre;
      int unidades;
      int precio;
      enum estado {moroso , atrasado , pagado};
   };
   
}