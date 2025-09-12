/*
    ARRAYS
    NIVEL 3
    EJERCICIO 04
    Declarar un array A de 15 elementos enteros.
    Solicitar al usuario el ingreso de un valor por vez
    e ir colocando dicho entero en el array,
    donde cada elemento previo existente en el array A deba ser menor o igual y
    cada elemento posterior deba ser mayor al que el usuario ingresó.
    En cada paso mostrar el estado del array.
    Al finalizar deberá quedar el array ordenado de forma ascendente.
*/

#include <stdio.h>

#define MAX 15

int main()
{
    int arregloA[MAX];
    int pivote;

    printf("Ingresa valores al arreglo y yo los ire ordenando por ti:\n");
    for (int i = 0; i < MAX; i++)
    {
        printf("Ingresa el valor %d: ", i + 1);
        scanf("%d", &arregloA[i]);
        for (int j = 0; j < i; j++)
        {
            if (arregloA[j] > arregloA[i])
            {
                pivote = arregloA[j];
                arregloA[j] = arregloA[i];
                arregloA[i] = pivote;
            }
        }
        printf("El arreglo hasta el momento:\n");
        printf("[");
        for (int k = 0; k <= i; k++)
        {
            printf("%d ", arregloA[k]);
        }
        printf("]\n");
    }

    return 0;
}
