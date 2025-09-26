/*
    PRACTICA 1
    NIVEL 1
    EJERCICIO 04:
    MATRIZ TRANSPUESTA
*/

#include <stdio.h>

int main()
{
    int columnas, filas, i, j;
    printf("Ingresa el numero de Columnas: ");
    scanf("%d", &columnas);

    printf("Ingresa el numero de Filas: ");
    scanf("%d", &filas);
    int matriz[filas][columnas];

    printf("Ingrese ahora los valores de la matriz:\n");
    for (i = 0; i < filas; i++)
    {
        for (j = 0; j < columnas; j++)
        {
            printf("Ingresa el valor %d-%d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("MATRIZ ORIGINAL:\n");
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("MATRIZ TRANSPUESTA:\n");
    for (int i = 0; i < columnas; i++)
    {
        for (int j = 0; j < filas; j++)
        {
            printf("%d ", matriz[j][i]);
        }
        printf("\n");
    }
    return 0;
}
