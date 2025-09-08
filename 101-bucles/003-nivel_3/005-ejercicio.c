/*
    BUCLES
    NIVEL 3
    EJERCICIO 05
    Permita ingresar una matriz cuadrada 4x4 y luego la muestre por pantalla.
*/

#include <stdio.h>

int main()
{
    int matriz[4][4];
    printf("Ingrese una matriz 4x4:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("ingrese el valor %d-%d: ", i + 1, j +1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nLa matriz 4x4:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

