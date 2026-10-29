#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
void contar_vocales(const char *texto,int *vocales,int *consonantes,int *digitos,int *otros) {
    *vocales = 0;
    *consonantes = 0;
    *digitos = 0;
    *otros = 0;
    /*Vamos a recorrer cada caracter del texto y verificaremos si es una vocal,consonante,digito o otro caracter
  */  for (int i = 0; texto[i] != '\0'; i++) {
        char c = texto[i];
        if (c >= 'A' && c <= 'Z') {//Verificamos si el caracter es mayuscula 
            c += 'a' - 'A'; //Lo pasamos a minuscula para facilitar la comparación
        }
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            (*vocales)++;
        } else if ((c >= 'b' && c <= 'z') && !(c == 'e' || c == 'i' || c == 'o' || c == 'u')) {
            (*consonantes)++;
        } else if (c >= '0' && c <= '9') {
            (*digitos)++;
        } else {
            if(c!='\n'&& c!='\0'){
             (*otros)++;
            }
            else {
             
            }
        }
    }
}
int main() {
    int *vocales=malloc(sizeof(int));
    int *consonantes=malloc(sizeof(int));
    int *digitos=malloc(sizeof(int));
    int *otros=malloc(sizeof(int));
    char texto[100];
    printf("Ingrese un texto: "); 
    fgets(texto, sizeof(texto), stdin);
    contar_vocales(texto, vocales, consonantes, digitos, otros);
    printf("Vocales: %d\n", *vocales);
    printf("Consonantes: %d\n", *consonantes);
    printf("Dígitos: %d\n", *digitos);
    printf("Otros: %d\n", *otros);
    free(vocales);
    free(consonantes);
    free(digitos);
    free(otros);   
    return 0;
}

