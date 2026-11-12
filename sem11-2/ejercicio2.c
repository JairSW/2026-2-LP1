#include <stdio.h>
enum Mes { // por defecto comienzan desde cero 
    ENERO,
    FEBRERO,
    MARZO,
    ABRIL,
    MAYO,
    JUNIO,
    JULIO,
    AGOSTO,
    SEPTIEMBRE,
    OCTUBRE,
    NOVIEMBRE,
    DICIEMBRE
};

int main(void){

    int mes=3; // abril 
    switch (mes) {
        case ENERO : printf("..."); break;
        case FEBRERO:
        case MARZO:
        case ABRIL: printf("..."); break;
        case MAYO:
        case JUNIO:
        case JULIO:
        case AGOSTO:
        case SEPTIEMBRE:
        case OCTUBRE:
        case NOVIEMBRE:
        case DICIEMBRE: break;
    }
    return 0;
}