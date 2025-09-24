/*
    FUNCIONES
    NIVEL 4
    EJERCICIO 06
    Implementar el algoritmo de ordenación quick-sort.
*/

#include <stdio.h>

int verficar_tamano();
void cargar_arreglo(int *, int);
void mostrar_arreglo(int *, int);
void ordenamiento(int *, int, int);

int main()
{
    int tamano;
    printf("Ingresa un arreglo desordenado y yo lo ordenare:\n");
    printf("Primero ingresa el tamaño del arreglo: ");
    tamano = verficar_tamano();

    int arreglo[tamano];
    cargar_arreglo(arreglo, tamano);
    printf("Tu arreglo desordenado:\n");
    mostrar_arreglo(arreglo, tamano);

    ordenamiento(arreglo, 0, tamano - 1);
    printf("Tu arreglo ordenado:\n");
    mostrar_arreglo(arreglo, tamano);

    return 0;
}

int verficar_tamano()
{
    int tama;
    do
    {
        printf("Ingresa un valor entre 2 y 50:\n> ");
        scanf("%d", &tama);
    } while (tama < 2 || tama > 50);
    return tama;
}

void cargar_arreglo(int *arr, int tama)
{
    for (int i = 0; i < tama; i++)
    {
        printf("Ingresa el valor %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void mostrar_arreglo(int *arr, int t)
{
    printf("[ ");
    for (int i = 0; i < t; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("]\n");
}

void ordenamiento(int *arr, int mini, int maxi)
{
    int i, j, aux, pivote;
    i = mini;
    j = maxi;
    pivote = arr[(maxi + mini) / 2];
    do
    {
        while (arr[i] < pivote)
        {
            i++;
        }
        while (arr[j] > pivote)
        {
            j--;
        }
        if (i <= j)
        {
            aux = arr[i];
            arr[i] = arr[j];
            arr[j] = aux;
            i++;
            j--;
        }
    } while (i <= j);
    if (mini < j)
    {
        ordenamiento(arr, mini, j);
    }
    if (i < maxi)
    {
        ordenamiento(arr, i, maxi);
    }
}
