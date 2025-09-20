/*
    FUNCIONES
    NIVEL 3
    EJERCICIO 01
    Crear funciones que mediante arrays se emulen operaciones de conjuntos.
    - En primer lugar existirán dos arrays A y B de 10 elementos enteros comprendidos en el rango [0. 100].
    - Debe crearse una función que cargue los arrays de forma aleatoria pero que no ingrese valores
    repetidos en cada array, es decir debemos controlar en esa función que cuando se propone un número
    aleatorio para almacenar en la posición i del array no esté dicho número en ninguna de las
    posiciones 0, 1, …, i-1.
    - Luego de la carga de los arrays mostrarlos por pantalla.
    - Crear una función que muestre por pantalla la intersección de estos “conjuntos”, es decir los
    elementos de A que estén presentes en B.
    - Crear una función que muestre por pantalla la unión de estos “conjuntos”, es decir los
    elementos pertenecientes a A y B, sin repetir.
    - Crear una función que muestre por pantalla la diferencia entre estos “conjuntos”, es decir
    los elementos pertenecientes a A no pertenecientes a B.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIEZ 10

void cargar_arreglo(int[]);
void mostrar_arreglo(int[]);
void interseccion_arreglo(int[], int[]);
void union_arreglo(int[], int[]);
void diferencia_arreglo(int[], int[]);

int main()
{
    srand(time(NULL));

    int arregloA[DIEZ], arregloB[DIEZ];

    cargar_arreglo(arregloA);
    cargar_arreglo(arregloB);

    printf("El arreglo A:\n");
    mostrar_arreglo(arregloA);

    printf("El arreglo B:\n");
    mostrar_arreglo(arregloB);

    printf("La intersección de los arreglos A y B:\n");
    interseccion_arreglo(arregloA, arregloB);

    printf("La unión de los arreglos A y B:\n");
    union_arreglo(arregloA, arregloB);

    printf("La diferencia de los arreglos A y B:\n");
    diferencia_arreglo(arregloA, arregloB);

    return 0;
}

void cargar_arreglo(int arr[])
{
    for (int i = 0; i < DIEZ; i++)
    {
        arr[i] = rand() % 101;
        for (int j = 0; j <= i; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                i--;
            }
        }
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

void interseccion_arreglo(int a[], int b[])
{
    printf("[");
    for (int i = 0; i < DIEZ; i++)
    {
        for (int j = 0; j < DIEZ; j++)
        {
            if (a[i] == b[j])
            {
                printf("%d, ", a[i]);
            }
        }
    }
    printf("]\n");
}

void union_arreglo(int a[], int b[])
{
    int i;
    printf("[ ");
    for (i = 0; i < DIEZ; i++)
    {
        printf("%d, ", a[i]);
    }
    for (i = 0; i < DIEZ; i++)
    {
        int cant = 0;
        for (int j = 0; j < DIEZ; j++)
        {
            if (a[j] != b[i])
            {
                cant++;
            }
        }
        if (cant == DIEZ)
        {
            printf("%d, ", b[i]);
        }
    }
    printf("]\n");
}

void diferencia_arreglo(int a[], int b[])
{
    printf("[ ");
    for (int i = 0; i < DIEZ; i++)
    {
        int cant = 0;
        for (int j = 0; j < DIEZ; j++)
        {
            if (a[i] != b[j])
            {
                cant++;
            }
        }
        if (cant == DIEZ)
        {
            printf("%d, ", a[i]);
        }
    }
    printf("]\n");
}
