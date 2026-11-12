#include <stdio.h>

//Definir o crear un tipo de dato
//En este caso, crear el tipo precio
typedef float Precio;

typedef char *Nombre_ptr;

typedef char Mensaje[50];

typedef struct  {
    int codigo;
    char nombres[50];
}Alumno;

typedef struct
{
    int codigo;
    int antiguedad;
}Obrero;

int main (void){
    Precio precio_venta, precio_compra;
    Nombre_ptr n1; // n1 es un puntero 
    Mensaje m1;
    Alumno a1;
    Obrero o1; 

    return 0;
}