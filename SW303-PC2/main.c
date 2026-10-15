#include <stdio.h>
#include "racional.h"

int main() {
    int n1, d1, n2, d2, n_res, d_res;

    printf("Ingrese el numerador de la primera fraccion: "); scanf("%d", &n1);

    printf("Ingrese el denominador de la primera fraccion: "); scanf("%d", &d1);

    printf("Ingrese el numerador de la segunda fraccion: "); scanf("%d", &n2);

    printf("Ingrese el denominador de la segunda fraccion: "); scanf("%d", &d2);
/* El problema no lo pide pero en caso se necesite validar que todo este correcto se podria incluir lo siguiente:
    if (d1 == 0 || d2 == 0) {
        printf("Los denominadores no pueden ser cero.\n");
        return 1;
    }
*/
    sumar(n1, d1, n2, d2, &n_res, &d_res);

    printf("La suma simplificada es: %d/%d\n", n_res, d_res);

    return 0;
}