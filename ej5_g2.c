#include <stdio.h>
#include <stdlib.h>
#include "headers.h"

enum espectral_t{M,K,G,F,A,B,O};


int main()
{
    char *ptr_color[7]={"Rojo","Naranja","Amarillo","Blanco amarillento","Blanco","Blanco azulado","Azul"};
    int temp,cl_espectral;


    puts(MSJ_BIENVENIDA);
    scanf("%d",&temp);

    if(temp>=1700 && temp<3200)
    {
        cl_espectral = M;
    }
    if(temp>=3200 && temp<4600)
    {
        cl_espectral = K;
    }
    if(temp>=4600 && temp<5700)
    {
        cl_espectral = G;
    }
    if(temp>=5700 && temp<7100)
    {
        cl_espectral = F;
    }
    if(temp>=7100 && temp<9600)
    {
        cl_espectral = A;
    }
    if(temp>=9600 && temp<28000)
    {
        cl_espectral = B;
    }
    if(temp>=28000 && temp<50000)
    {
        cl_espectral = O;
    }

    printf("%s%s",MSJ_COLOR,ptr_color[cl_espectral]);


    return 0;
}
