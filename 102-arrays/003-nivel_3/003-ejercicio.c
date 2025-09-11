/*
    ARRAYS
    NIVEL 3
    EJERCICIO 03
    Dadas dos matrices de dimensión NxN, llamadas X e Y, mostrar por pantalla la suma de las mismas.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int** reserva_memoria(int);
void creador_matriz(int**, int);
void imprimir_matriz(int**, int);
void liberar_memoria(int**, int);

int main()
{
    srand(time(NULL));
    int tama;
    do
    {
        printf("Ingrese un tamaño de matriz entre 2 y 10: ");
        scanf("%d", &tama);
    } while (tama < 2 || tama > 10);

    int **matrizX = reserva_memoria(tama);
    int **matrizY = reserva_memoria(tama);

    creador_matriz(matrizX, tama);
    creador_matriz(matrizY, tama);

    printf("La matriz X:\n");
    imprimir_matriz(matrizX, tama);

    printf("La matriz Y:\n");
    imprimir_matriz(matrizY, tama);

    printf("La Suma de las matrices:\n");
    for (int i = 0; i < tama; i++)
    {
        for (int j = 0; j < tama; j++)
        {
            printf("%d\t", matrizX[i][j] + matrizY[i][j]);
        }
        printf("\n");
    }

    liberar_memoria(matrizX, tama);
    liberar_memoria(matrizY, tama);

    return 0;
}

int **reserva_memoria(int t)
{
    int **matriz = (int **)malloc(t * sizeof(int *));
    for (int i = 0; i < t; i++)
    {
        matriz[i] = (int *)malloc(t * sizeof(int));
    }
    return matriz;
}

void creador_matriz(int **arr, int t)
{
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < t; j++)
        {
            arr[i][j] = rand() % 10;
        }
    }
}

void imprimir_matriz(int **arr, int t)
{
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < t; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

void liberar_memoria(int **arr, int t)
{
    for (int i = 0; i < t; i++)
    {
        free(arr[i]);
    }
    free(arr);
    arr = NULL;
}
