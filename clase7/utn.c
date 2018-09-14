#include <stdio_ext.h>
#include <string.h>
#include <stdlib.h>
#include "utn.h"

void altaPersona (Persona* pPer)
{
    strncpy(p->nombre,"Pablo Ezequiel", 70);
    strncpy(p->dni,"34.415.834", 20);
    p->altura = 1.76;
    p->edad = 29;
}


void printPersona (Persona* pPer)
{
    printf("El nombre es: %s \n",p->nombre);
    printf("Su DNI es: %s \n",p->dni);
    printf("Su altura es: %f \n",p->altura);
    printf("Su edad es: %d \n",p->edad);
}

int isFloat(char* pBuffer)
{
    return 1;
}

static int getString(char* pBuffer, int limite)
{
    char bufferString [4096];
    int retorno = -1;
    if(pBuffer != NULL && limite > 0)
    {
        __fpurge(stdin);
        fgets(bufferString,sizeof(bufferString),stdin);
        if(bufferString[strlen(bufferString)-1]=='\n')
        {
            bufferString[strlen(bufferString)-1]='\0';
        }
        if(strlen(bufferString) <= limite)
        {
            strncpy(pBuffer,bufferString,limite);
            retorno = 0;
        }
    }
    return retorno;
}


static int getFloat(float* pBuffer)
{
    char bufferString [5];
    int retorno = -1;


    if(getString(bufferString,sizeof(bufferString)) == 0 && isFloat(bufferString))
    {
        *pBuffer = atof(bufferString);
        retorno = 0;
    }

    return retorno;
}


int utn_getFloat(  float* pFloat, char* msg,
                    char msgErr[],float min, float max,
                    int reintentos)

{
    int retorno=-1;
    float buffer;
    if( pFloat != NULL &&  msg != NULL && msgErr != NULL &&
         min <= max && reintentos >= 0)
    {
        do
        {
            reintentos--;
            printf("%s",msg);
            if( getFloat(&buffer) == 0 &&
                buffer >= min && buffer <= max)
            {
                retorno = 0;
                *pFloat = buffer;
                break;
            }
            else
            {
                printf("%s",msgErr);
            }
        }while(reintentos >= 0);
    }
    return retorno;
}

void insertion(int data[],int len)
{
    int i,j;
    int temp;
    for(i=1;i<len;i++)
    {
        temp = data[i];
        j=i-1;
        while(j>=0 && temp<data[j]) // temp<data[j] o temp>data[j]
        {
            data[j+1] = data[j];
            j--;
        }
        data[j+1]=temp; // inserción
     }
}


















