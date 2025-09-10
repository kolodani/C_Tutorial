/*
    ARRAYS
    NIVEL 2
    EJERCICIO 02
    Permita la carga aleatoria de dos arrays de 10 enteros cada uno,
    llamados A y B, e indique cual de los dos tiene más números pares
    tratando de utilizando como máximo dos bucles for en todo el programa.
*/

#include <stdio.h>

int armador_arreglos(int*);

int main()
{
    int arregloA[10], arregloB[10];
    int paresA = 0, paresB = 0;

    printf("Ingrese los valores del arreglo A:\n");
    paresA = armador_arreglos(arregloA);

    printf("Ingrese los valores del arreglo B:\n");
    paresB = armador_arreglos(arregloB);

    if (paresA > paresB)
    {
        printf("El arreglo A tiene mas pares que B, %d contra %d.\n", paresA, paresB);
    }
    else if (paresB > paresA)
    {
        printf("El arreglo B tiene mas pares que A, %d contra %d.\n", paresB, paresA);
    }
    else
    {
        printf("Los arreglo A y B tienen la misma cantidad de pares, %d y %d.\n", paresA, paresB);
    }

    return 0;
}

int armador_arreglos(int *arreglo)
{
    int contador = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("Ingrese el valor %d del arreglo: ", i + 1);
        scanf("%d", &arreglo[i]);
        if (arreglo[i] % 2 == 0)
        {
            contador++;
        }
    }
    return contador;
}
