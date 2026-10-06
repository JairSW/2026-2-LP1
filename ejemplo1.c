#include <stdio.h>
int main(){
    int c[5];

    printf("La direccion del arreglo c es %p\n", c);
    printf("La direccion del primer elemento de c es %p\n", &c[0]); 
    printf("y su valor es %d\n", c[0]);
    printf("La direccion del segundo elemento de c es %p\n", &c[1]); 
    printf("y su valor es %d\n", c[1]);

    for(size_t i=0; i<5; i++){
        c[i]=1; 
    
    printf("-- La direccion del elemento de c es %p\n", &c[i]); 
    printf("y su valor es %d\n", c[i]);
    }

    return 0;
}