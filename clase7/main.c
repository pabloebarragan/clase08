#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"
#define CANTIDAD_EMPLEADOS 6

/*
struct S_Persona
{
    char nombre[70];
    int edad;
    char dni[20];
    float altura;
};
typedef struct S_Persona Persona;
*/

int main()
{
    Persona p;
    altaPersona(p);

    printPersona(p);


    int v[5],i;
    for (i=0;i<5;i++)
    {
        printf("Ingrese valor a cargar en el vector");
        scanf("%d",&v[i]);
    }
    printf("NUMERO SIN ORDENAR: \n\n");
    for (i=0;i<5;i++)
    {
        printf("numero: %d \n",v[i]);
    }
    printf("\n\n");
    insertion(v,5);
    printf("NUMEROS ORDENADOS: \n\n");
    for (i=0;i<5;i++)
    {
        printf("numero: %d \n",v[i]);
    }










    /*
    float edades[CANTIDAD_EMPLEADOS] = {50,10,30,1,10,22};
    int i;
    for(i=0;i < CANTIDAD_EMPLEADOS;i++)
    {
        if(utn_getFloat(&edades[i],"\nEdad?","\nEdad fuera de rango",1.2,10.4,2)==-1)
        {
            edades[i] = -1;
        }
    }
    return 0;
    */
}






