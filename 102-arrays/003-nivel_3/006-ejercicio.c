/*
    ARRAYS
    NIVEL 3
    EJERCICIO 06
    Dado un array de 10 enteros positivos en el rango [0, 100] cargados aleatoriamente,
    mostrarlo por pantalla, luego ordenar sus elementos de manera ascendente y
    finalmente mostrar el resultado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10

void mostrar_arreglo(int *, int);

int main()
{
    srand(time(NULL));

    int arreglo[MAX];
    int pivote;
    for (int i = 0; i < MAX; i++)
    {
        arreglo[i] = rand() % 101;
    }

    printf("El arreglo creado:\n[ ");
    mostrar_arreglo(arreglo, MAX);
    printf("]\n");

    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            if (arreglo[j] < arreglo[i] && j > i)
            {
                pivote = arreglo[j];
                arreglo[j] = arreglo[i];
                arreglo[i] = pivote;
            }
        }
    }

    printf("El arreglo ordenado:\n[ ");
    mostrar_arreglo(arreglo, MAX);
    printf("]\n");

    return 0;
}

void mostrar_arreglo(int *arr, int t)
{
    for (int i = 0; i < t; i++)
    {
        printf("%d ", arr[i]);
    }
}
