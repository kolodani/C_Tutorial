/*
    FUNCIONES
    NIVEL 2
    EJERCICIO 05
    Crear una función que al recibir un array de 10 enteros determine si está
    ordenado de manera ascendente.
*/

#include <stdio.h>

#define DIEZ 10
#define TRUE 1
#define FALSE 0

void cargar_arreglo(int[]);
int esta_ordenado(int[]);

int main()
{
    int arreglo[DIEZ];
    int respuesta = FALSE;
    printf("Ingresa un arreglo y te dire si esta ordenado de manera ascendente.\n");
    cargar_arreglo(arreglo);
    respuesta = esta_ordenado(arreglo);
    if (respuesta == TRUE)
    {
        printf("El arreglo SI esta ordenado.\n");
    }
    else
    {
        printf("El arreglo NO esta ordenado.\n");
    }
    return 0;
}

void cargar_arreglo(int arr[])
{
    for (int i = 0; i < DIEZ; i++)
    {
        printf("Ingresa el valor %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

int esta_ordenado(int arr[])
{
    int menor = 0;
    for (int i = 0; i < (DIEZ - 1); i++)
    {
        if (arr[i] > arr[i+1])
        {
            menor++;
        }
    }
    if (menor == 0)
    {
        return TRUE;
    }
    return FALSE;
}
