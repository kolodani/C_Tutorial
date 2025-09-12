/*
    ARRAYS
    NIVEL 2
    EJERCICIO 01
    Permita la caga de una array de 30 enteros aleatorios. Luego mostrarlos por pantalla.
*/

#include <stdio.h>

#define MAX 30

int main()
{
    int arreglo[MAX];
    printf("Ingrese los 30 valores del arreglo:\n");
    for (int i = 0; i < MAX; i++)
    {
        printf("Ingrese el valor %d de arreglo: ", i + 1);
        scanf("%d", &arreglo[i]);
    }
    printf("El arreglo listo: ");
    for (int i = 0; i < MAX; i++)
    {
        printf("%d, ", arreglo[i]);
    }

    return 0;
}
