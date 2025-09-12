/*
    ARRAYS
    NIVEL 2
    EJERCICIO 04
    Dado un array A de 10 enteros cargados automáticamente (con números aleatorios),
    invertir el array, es decir si se tiene el array
    A= [ 45, 11, -5, 80, 6, 99, 105, -200, 22, 1 ], A deberá quedar del siguiente
    modo al finalizar el programa
    A= [ 1, 22, -200, 105, 99, 6, 80, -5, 11, 45 ].
    Considere el uso de una variable a modo de pivote.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXIMO 10

void imprimir_arreglo(int *);

int main()
{
    srand(time(NULL));
    int arreglo[MAXIMO];
    int pivote;
    for (int i = 0; i < MAXIMO; i++)
    {
        arreglo[i] = rand() % 101;
    }
    imprimir_arreglo(arreglo);
    for (int i = 0; i < 5; i++)
    {
        pivote = arreglo[i];
        arreglo[i] = arreglo[MAXIMO - 1 - i];
        arreglo[MAXIMO - 1 - i] = pivote;
    }
    imprimir_arreglo(arreglo);

    return 0;
}

void imprimir_arreglo(int *arreglo)
{
    printf("El arreglo: [");
    for (int i = 0; i < MAXIMO; i++)
    {
        printf("%d" ,arreglo[i]);
        if (i != 9)
        {
            printf(", ");
        }
    }
    printf("]\n");
}
