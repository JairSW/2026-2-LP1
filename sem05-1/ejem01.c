#include <stdio.h>
#define ANIO_ACTUAL 2027

#ifndef __LINUX__
#define __SO__ "Windows"
#else 
#define __SO__ "Linux"
#endif
void saludar();
int devolver_anio_actual();

int main(){

    saludar();

    return 0;
}
int devolver_anio_actual(){
    return ANIO_ACTUAL;
}
void saludar(){
    printf("Bienvenidos a SW303 en el anio actual %d\n",devolver_anio_actual());
}
