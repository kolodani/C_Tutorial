/*
    ARRAYS
    NIVEL 2
    EJERCICIO 01
    Permita la caga de una array de 30 enteros aleatorios. Luego mostrarlos por pantalla.
*/

#include <stdio.h>

int main()
{
    int arreglo[30];
    printf("Ingrese los 30 valores del arreglo:\n");
    for (int i = 0; i < 30; i++)
    {
        printf("Ingrese el valor %d de arreglo: ", i + 1);
        scanf("%d", &arreglo[i]);
    }
    printf("El arreglo listo: ");
    for (int i = 0; i < 30; i++)
    {
        printf("%d, ", arreglo[i]);
    }

    return 0;
}
