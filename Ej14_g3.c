#include <stdio.h>
#include <stdlib.h>

void funcion(void) {
    static int x = 0;
    x++;
    printf("%d\n", x);
}

int main(void)
{
    funcion();
    funcion();
    funcion();
    funcion();
    funcion();

    return EXIT_SUCCESS;
}

/* El programa funciona basicamente por la sentenccia static... Esta sentencia, hace que la varaible local x no se ddestruya al salir de la funcion, es decir, funciona como una variable global./*
