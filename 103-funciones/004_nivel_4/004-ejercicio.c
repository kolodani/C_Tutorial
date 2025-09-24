/*
    FUNCIONES
    NIVEL 4
    EJERCICIO 04
    Crear una función recursiva para sumar los elementos de un array.
*/

#include <stdio.h>

#define MAX 50
#define MIN 1

int verifica_tamano();
void llenar_arreglo(int*, int);
int suma_valores(int*, int, int);

int main()
{
    int tamano, resultado, cero = 0;
    printf("Sumador de valores del arreglo.\n");
    tamano = verifica_tamano();

    printf("Ahora llenemos el arreglo de valores.\n");
    int arreglo[tamano];
    llenar_arreglo(arreglo, tamano);

    resultado = suma_valores(arreglo, tamano - 1, cero);
    printf("La suma del arreglo es %d", resultado);
    return 0;
}

int verifica_tamano()
{
    int tama;
    do
    {
        printf("Primero ingresa el tamaño del arreglo (entre 2 y 50): ");
        scanf("%d", &tama);
    } while (tama < MIN || tama > MAX);
    return tama;
}

void llenar_arreglo(int *arr, int t)
{
    for (int i = 0; i < t; i++)
    {
        do
        {
            printf("Ingrese el valor %d: ", i + 1);
            scanf("%d", &arr[i]);
            if (arr[i] <= 0)
            {
                printf("Solo valores positivos.\n");
            }
        } while (arr[i] <= 0);
    }
}

int suma_valores(int *arr, int t, int acumulador)
{
    if (t < 0)
    {
        return acumulador;
    }
    return suma_valores(arr, t - 1, acumulador + arr[t]);
}
