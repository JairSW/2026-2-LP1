#include <stdio.h>
#include "racional.h"

static int es_primo(int n) { // al ser static es unicamente visible dentro de este archivo 
    if (n < 2) { // ya que el 1 no es considerado primo 
        return 0; // el 0 se tomaria como un false dentro de un if , eso lo usaremos en "simplificar"
    }

    for (int i = 2; i <= n / i; i++) {
        if (n % i == 0) {
            return 0; // no es primo 
        }
    }

    return 1; // si es primo , el 1 se toma como verdadero dentro de un if
}
int mcd(int a, int b){ // recursiva, máximo común divisor.
if (b == 0) {
        return a;
    }
    return mcd(b, a % b);
}
void simplificar(int *num, int *den){
    // Si ambos son primos distintos, ya no se puede simplificar.
    if (es_primo(*num) && es_primo(*den) && *num != *den) {
        return; // ambos quedan como estaban
    }

int divisor = mcd(*num, *den); // calculamos su comun divisor 

    *num = *num / divisor; // dividimos a ambos entre ello 
    *den = *den / divisor;
}

void sumar(int n1, int d1, int n2, int d2, int *n_res, int *d_res){
    *n_res = n1 * d2 + n2 * d1; // sumamos en aspa las "fracciones"
    *d_res = d1 * d2;

    simplificar(n_res, d_res); //simplificamos
}


