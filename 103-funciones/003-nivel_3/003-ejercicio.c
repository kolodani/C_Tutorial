/*
    FUNCIONES
    NIVEL 3
    EJERCICIO 03
    Permitir al programa el almacenamiento de una matriz 3x3 con enteros
    comprendidos en el rango de valores [1, 9].
    Cargar dicha matriz manualmente.
    Mediante una función se debe determinar si la matriz resultante representa
    o no un cuadrado mágico, donde las suma de los valores en
    cada fila, columna y diagonales da el mismo número.
*/

#include <stdio.h>
#include <stdlib.h>

#define TRES 3
#define NUEVE 9
#define QUINCE 15
#define TRUE 1
#define FALSE 0

int **reservar_memoria();
void cargar_matriz(int **, int *);
int es_magico(int **);

int main()
{
    int **matriz = reservar_memoria();
    int numeros[9];
    int respuesta = FALSE;
    for (int i = 0; i < NUEVE; i++)
    {
        numeros[i] = FALSE;
    }
    printf("Bienvenidos a cuadrado magico.\nIngresa enteros del 1 al 9 y te dire si tu cuadrado es magico.\n");

    cargar_matriz(matriz, numeros);
    respuesta = es_magico(matriz);
    if (respuesta == FALSE)
    {
        printf("El cuadrado no es magico.\n");
    }
    else
    {
        printf("El cuadrado si es magico.\n");
    }

    return 0;
}

int **reservar_memoria()
{
    int **matriz = (int **)malloc(TRES * sizeof(int *));
    for (int i = 0; i < TRES; i++)
    {
        matriz[i] = (int *)malloc(TRES * sizeof(int));
    }
    return matriz;
}

void cargar_matriz(int **arr, int *num)
{
    for (int i = 0; i < TRES; i++)
    {
        for (int j = 0; j < TRES; j++)
        {
            printf("Ingresa el valor %d-%d: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
            if (arr[i][j] < 1 || arr[i][j] > 9)
            {
                printf("El valor tiene que estar entre 1 y 9.\n");
                j--;
            }
            else
            {
                if (num[arr[i][j]] == FALSE)
                {
                    num[arr[i][j]] = TRUE;
                }
                else
                {
                    printf("El valor %d ya fue ingresado, ingrese otro numero entre [1-9].\n", arr[i][j]);
                    j--;
                }
            }
        }
    }
}

int es_magico(int **arr)
{
    int respuesta = TRUE;
    int diagonalI = 0, diagonalD = 0;
    for (int i = 0; i < TRES; i++)
    {
        int columna = 0, fila = 0;
        for (int j = 0; j < TRES; j++)
        {
            columna += arr[j][i];
            fila += arr[i][j];
        }
        diagonalI += arr[i][i];
        diagonalD += arr[TRES - i - 1][TRES - i - 1];
        if (columna != 15 || fila != 15)
        {
            respuesta = FALSE;
        }
    }
    if (diagonalD != 15 || diagonalI != 15)
    {
        respuesta = FALSE;
    }
    return respuesta;
}
