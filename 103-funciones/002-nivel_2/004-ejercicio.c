/*
    FUNCIONES
    NIVEL 2
    EJERCICIO 04
    Crear un programa que permita utilizando funciones:
    cargar un array A de 20 enteros con números enteros aleatorios entre 1 y 100,
    mostrarlo por pantalla, calcular la suma de todas sus componentes y el promedio.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define VEINTE 20

void cargar(int[]);
void mostrar(int[]);
int suma_componentes(int[]);
int promedio_componentes(int);

int main()
{
    int sumatoria, promedio;
    srand(time(NULL));

    int arreglo[VEINTE];
    cargar(arreglo);

    printf("El arreglo completo:\n");
    mostrar(arreglo);

    sumatoria = suma_componentes(arreglo);
    printf("La sumatoria del arreglo es: %d\n", sumatoria);

    promedio = promedio_componentes(sumatoria);
    printf("La promedio del arreglo es: %d\n", promedio);

    return 0;
}

void cargar(int arr[])
{
    for (int i = 0; i < VEINTE; i++)
    {
        arr[i] = rand() % 101;
    }
}

void mostrar(int arr[])
{
    printf("[ ");
    for (int i = 0; i < VEINTE; i++)
    {
        printf("%d", arr[i]);
        if (i != (VEINTE - 1))
        {
            printf(", ");
        }
    }
    printf(" ]\n");
}

int suma_componentes(int arr[])
{
    int suma = 0;
    for (int i = 0; i < VEINTE; i++)
    {
        suma += arr[i];
    }
    return suma;
}

int promedio_componentes(int a)
{
    return a / VEINTE;
}
