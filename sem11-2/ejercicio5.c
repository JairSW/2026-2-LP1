#include <stdio.h>

typedef struct {
    unsigned int flag : 1; // 0b0 // 1 bit de ancho
    unsigned int nivel : 3; // 0b000 // 3 bits de ancho
    unsigned int modo : 2; // 0b00 // 2 bits de ancho
    unsigned int prioridad : 4; // 0b0000 // 4 bits de ancho
} Configuracion ;

int main(void){
    Configuracion c1; 

    c1.flag =1; // solo se permiten valores de 0 o 1, sino Error

    printf("El flag es %d\n",c1.flag);
    printf("c1 ocupa %d bytes",sizeof(Configuracion));
    return 0;
}