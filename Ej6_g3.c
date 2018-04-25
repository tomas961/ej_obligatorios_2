#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "headers.h"


float cilindro_diametro(float);
float cilindro_circunferencia(float);
float cilindro_base(float);
float cilindro_volumen(float,float);

int main()
{

    float r_cilindro,h_cilindro;

    puts(MSJ_RADIO);
    scanf("%f",&r_cilindro);
    puts(MSJ_ALTURA);
    scanf("%f",&h_cilindro);

    puts("");
    printf("%f\n",cilindro_diametro(r_cilindro));
    printf("%f\n",cilindro_circunferencia(r_cilindro));
    printf("%f\n",cilindro_base(r_cilindro));
    printf("%f\n",cilindro_volumen(r_cilindro,h_cilindro));



    return 0;
}


float cilindro_diametro(float r_cil)
{
    return r_cil*2;
}

float cilindro_circunferencia(float r_cil)
{
    return M_PI*r_cil*2;
}

float cilindro_base(float r_cil)
{
    return M_PI*r_cil*r_cil;
}

float cilindro_volumen(float r_cil,float h_cil)
{
    return M_PI*r_cil*r_cil*h_cil;
}
