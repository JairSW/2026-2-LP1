
#include <stdio.h>
#include <stdlib.h>

typedef struct nodo {
    int dato;
    struct nodo *izq, *der;
} Nodo;

Nodo* insertar(Nodo **p, int dato) {
    if (*p == NULL) {
        *p = malloc(sizeof(Nodo));
        (*p)->dato = dato;
        (*p)->izq = NULL;
        (*p)->der = NULL;

        return *p;
    }
    else if (dato < (*p)->dato) {
        (*p)->izq = insertar(&((*p)->izq), dato);
        return (*p)->izq;
    }
    else {
        (*p)->der = insertar(&((*p)->der), dato);
        return (*p)->der;
    }
}

int buscar(Nodo *p, int dato) {
    if (p == NULL) {
        return 0;
    }
    else if (dato == p->dato) {
        return 1;
    }
    else if (dato < p->dato) {
        return buscar(p->izq, dato);
    }
    else {
        return buscar(p->der, dato);
    }
}

void imprimirArbol(Nodo *p) {
    if (p != NULL) {
        imprimirArbol(p->izq);
        printf("dato : %d\n", p->dato);
        imprimirArbol(p->der);
    }
}

int main() {
    Nodo *ARBOL = NULL;

    // insertar valores
    insertar(&ARBOL, 10);
    insertar(&ARBOL, 12);
    insertar(&ARBOL, 7);

    imprimirArbol(ARBOL);

    if (buscar(ARBOL, 7)) {
        printf("se encontro el valor 7\n");
    }
    else {
        printf("no se pudo encontrar el valor 7\n");
    }

    return 0;
}