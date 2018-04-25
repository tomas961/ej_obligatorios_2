#include <stdio.h>
#include <stdlib.h>

void conversor_seg(int *min,int *horas,int *seg);

int main()
{
    int seg=0,min=0,horas=0;

    puts("Ingrese cantidad en segundos");
    scanf("%d",&seg);
    if(seg<0)
    {
        puts("Ingreso un numero negativo");
        return -1;
    }

    conversor_seg(&min,&horas,&seg);

    puts("");
    printf(" Horas | Minutos | Segundos\n");
    printf("  %d   :   %d    :    %d",horas,min,seg);

    return 0;
}

void conversor_seg(int *min,int *horas,int *seg)
{
    int a,s;

    s = *seg;

    *horas = s/3600;
    a = s%3600;
    *min = a/60;
    *seg = a%60;
}
