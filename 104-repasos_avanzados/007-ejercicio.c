/*
    PRACTICA 1
    NIVEL 1
    EJERCICIO 07:
    RECORRIENDO UN ARRAY
*/

#include <stdio.h>

#define CIEN 10

int main()
{
    int arreglo[CIEN], i;
    int *puntero;
    puntero = arreglo;
    for (i = 0; i < CIEN; i++)
    {
        printf("Ingresa el valor %d del arreglo: ", i + 1);
        scanf("%d", puntero + i);
    }
    for (i = CIEN - 1; i >= 0; i--)
    {
        printf("%d ", *(puntero + i));
    }

    return 0;
}
