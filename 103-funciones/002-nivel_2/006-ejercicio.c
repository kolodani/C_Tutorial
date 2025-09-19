/*
    FUNCIONES
    NIVEL 2
    EJERCICIO 06
    Implementar un programa que permita ordenar un array de 10 enteros de forma
    ascendente siguiendo algún algoritmo de ordenamiento.
*/

#include <stdio.h>

#define DIEZ 10

void cargar_arreglo(int[]);
void mostrar_arreglo(int[]);
void ordenar_arreglo(int[]);

int main()
{
    int arreglo[DIEZ];
    printf("Ingrese un arreglo y lo ordenare:\n");
    cargar_arreglo(arreglo);
    printf("Tu arreglo cargado:\n");
    mostrar_arreglo(arreglo);
    ordenar_arreglo(arreglo);
    printf("Tu arreglo ordenado:\n");
    mostrar_arreglo(arreglo);
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

void mostrar_arreglo(int arr[])
{
    printf("[ ");
    for (int i = 0; i < DIEZ; i++)
    {
        printf("%d", arr[i]);
        if (i != (DIEZ - 1))
        {
            printf(", ");
        }
    }
    printf(" ]\n");
}

void ordenar_arreglo(int arr[])
{
    int aux;
    for (int i = 0; i < DIEZ; i++)
    {
        for (int j = i; j < DIEZ; j++)
        {
            if (arr[i] > arr[j])
            {
                aux = arr[i];
                arr[i] = arr[j];
                arr[j] = aux;
            }
        }
    }
}
