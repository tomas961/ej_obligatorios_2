#include <stdio.h>
#include <stdlib.h>

void busqueda_binaria (int *array_ptr,int n_elementos,int objetivo);

int main()
{
    int array[]={2,4,5,7,9,10,27,35};
    int n_elementos,objetivo;

    puts("Introduzca el numero a buscar");
    scanf("%d",&objetivo);

    n_elementos = sizeof(array)/sizeof(int);

    busqueda_binaria (&array[0],n_elementos,objetivo);

    return 0;
}


void busqueda_binaria (int *array_ptr,int n_elementos,int objetivo)
{

    int izq,der,mitad;

    izq = 0;
    der = n_elementos;

    while(izq<=der)
    {
        mitad = (izq+der)/2;

        if(*(array_ptr+mitad) == objetivo)
        {
            printf("El numero %d existe en la posicion %d del array\n",objetivo,mitad);
            break;
        }

        if(*(array_ptr+mitad) < objetivo)
        {
            izq = mitad;
            mitad = (izq+der)/2;
        }

        if(*(array_ptr+mitad) > objetivo)
        {
            der = mitad;
            mitad = (izq+der)/2;
        }




    }

}
