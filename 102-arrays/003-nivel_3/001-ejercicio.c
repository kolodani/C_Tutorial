/*
    ARRAYS
    NIVEL 3
    EJERCICIO 01
    Permitir el ingreso de una matriz de enteros de dimensión 3x4 y mostrarla por pantalla.
*/

#include <stdio.h>

int main()
{
    int matriz[3][4];
    printf("Ingrese los valores de una matriz 3x4:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Ingrese el valor [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Tu matriz queda asi:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
