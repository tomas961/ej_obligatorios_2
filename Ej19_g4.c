#include <stdio.h>
#include <stdlib.h>
#define F 3
#define C 3

void escribir_matriz(int matriz[F][C]);
void mostrar_matriz(int matriz[F][C]);
void traza_matriz(int matriz[F][C]);
void suma_num_matriz(int matriz[F][C]);
void multiplic_num_matriz(int matriz[F][C]);
void transpuesta_matriz(int matriz[F][C]);

int main()
{
    int matriz[F][C];

    escribir_matriz(matriz);
    mostrar_matriz(matriz);
    traza_matriz(matriz);
    suma_num_matriz(matriz);
    multiplic_num_matriz(matriz);
    transpuesta_matriz(matriz);


    printf("Hello world!\n");
    return 0;
}


void escribir_matriz(int matriz[F][C])
{
    int i,j;

    for(i=0;i<F;i++)
    {
        for(j=0;j<C;j++)
        {
            printf("Ingrese el dato con posicion (%d,%d): ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }

}


void mostrar_matriz(int matriz[F][C])
{
    int i,j;

    puts("");
    puts("La matriz es: ");

    for(i=0;i<F;i++)
    {
        for(j=0;j<C;j++)
        {
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }

}

void traza_matriz(int matriz[F][C])
{
    int i,j,traza=0;

    puts("-------------------- a) --------------------");
    puts("");

    for(i=0;i<F;i++)
    {
        for(j=0;j<C;j++)
        {
            if(i==j)
            {
                traza = traza + matriz[i][j];
            }
        }

    }

    printf("La Traza de la matriz es: %d\n",traza);
    puts("");
}

void suma_num_matriz(int matriz[F][C])
{
    int i,j,num;

    puts("-------------------- b) --------------------");

    puts("Ingrese el numero para sumarlo a la matriz");
    scanf("%d",&num);

    printf("La matriz sumada al numero %d es: \n",num);

    for(i=0;i<F;i++)
    {
        for(j=0;j<C;j++)
        {
            printf("%d ",matriz[i][j]+num);
        }
        printf("\n");
    }
    puts("");
}

void multiplic_num_matriz(int matriz[F][C])
{
    int i,j,num;

    puts("-------------------- c) --------------------");

    puts("Ingrese el numero para multiplicarlo a la matriz");
    scanf("%d",&num);

    printf("La matriz multiplicada por el numero %d es: \n",num);

    for(i=0;i<F;i++)
    {
        for(j=0;j<C;j++)
        {
            printf("%d ",matriz[i][j]*num);
        }
        printf("\n");
    }
    puts("");
}

void transpuesta_matriz(int matriz[F][C])
{
    int i,j;

    puts("-------------------- d) --------------------");

    puts("");
    puts("La matriz transpuesta es: ");

    for(i=0;i<F;i++)
    {
        for(j=0;j<C;j++)
        {
            printf("%d ",matriz[j][i]);
        }
        printf("\n");
    }
    puts("");

}



