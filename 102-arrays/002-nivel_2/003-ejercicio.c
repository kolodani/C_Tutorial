/*
    ARRAYS
    NIVEL 2
    EJERCICIO 03
    Dado un array A de 10 ints cagado aleatoriamente y con valores comprendidos
    entre 0 y 100, determinar si se tienen más elementos pares que impares o
    bien misma cantidad.
    Rehaga el ejercicio utilizando un único bucle for si empleo más de uno.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10

int main()
{
    int arregloA[MAX];
    int pares = 0, impares = 0;

    srand(time(NULL));
    for (int i = 0; i < MAX; i++)
    {
        arregloA[i] = rand() % 101;
        if (arregloA[i] % 2 == 0)
        {
            pares++;
        }
        else
        {
            impares++;
        }
    }
    if (pares > impares)
    {
        printf("El arreglo tiene mas valores pares que impares: %d contra %d.\n", pares, impares);
    }
    else if (impares > pares)
    {
        printf("El arreglo tiene mas valores impares que pares: %d contra %d.\n", impares, pares);
    }
    else
    {
        printf("El arreglo tiene igual cantidad de  valores impares que pares: %d y %d.\n", impares, pares);
    }

    return 0;
}
