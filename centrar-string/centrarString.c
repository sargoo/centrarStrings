#include <stdio.h>
#include <stdlib.h>
#include "centrarString.h"


void centrarTitulo(char titulo[])
{
    int anchoTotal = 118;
    int contador = 0;
    while (titulo[contador] != 0)
    {
        contador ++;
    }
    int espacio = anchoTotal - contador;
    printf("||");


    for(int i = 0; i < anchoTotal-4; i++)
    {
        printf(" ");
    }
    printf("||");
    printf("\n");
    printf("||");
    for(int i = 0; i < (espacio/2)-2; i++)
    {
        printf(" ");
    }

    printf("%s", titulo);


    if(espacio % 2 != 0)
    {
        for(int i = 0; i < (espacio/2)-1; i++)
        {
            printf(" ");
        }
    }
    else
    {
        for(int i = 0; i < (espacio/2)-2; i++)
        {
            printf(" ");
        }

    }

    printf("||");
    printf("\n");
    printf("||");

    for(int i = 0; i < anchoTotal -4 ; i++)
    {
        printf(" ");
    }
    printf("||");
    printf("\n");
}

void imprimirTecho(int anchoTotal)
{

    for(int i = 0; i < anchoTotal; i++)
    {
        printf("=");
    }
    printf("\n");
}
