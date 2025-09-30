/*
    PRACTICA 2
    MEMORIA DINAMICA
    EJERCICIO 04:
    MATRIZ TRANSPUESTA
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int verificar_valor();
int **reservar_memoria(int, int);
void llenar_matriz(int **, int, int);
int **trasponer_matriz(int **, int, int);
void mostrar_matriz(int **, int, int);
void liberar_memoria(int**, int);

int main()
{
    srand(time(NULL));

    int filas, columnas;
    int **matriz, **matrizT;

    printf("Matriz transpuesta.\n");
    printf("Ingrese ahora el tamaño de las filas de la matriz:\n");
    filas = verificar_valor();
    printf("Ingrese ahora el tamaño de las columnas de la matriz:\n");
    columnas = verificar_valor();
    matriz = reservar_memoria(filas, columnas);
    llenar_matriz(matriz, filas, columnas);
    matrizT = trasponer_matriz(matriz, filas, columnas);

    printf("MATRIZ ORIGINAL.\n");
    mostrar_matriz(matriz, filas, columnas);
    printf("MATRIZ TRANSPUESTA.\n");
    mostrar_matriz(matrizT, columnas, filas);
    liberar_memoria(matriz, filas);
    liberar_memoria(matrizT, columnas);
    matriz = NULL;
    matrizT = NULL;
    return 0;
}

int verificar_valor()
{
    int numero;
    do
    {
        printf("Recuerda que tiene que ser positivo el valor: ");
        scanf("%d", &numero);
    } while (numero <= 0);
    return numero;
}

int **reservar_memoria(int filas, int columnas)
{
    int **mat = (int **)malloc(filas * sizeof(int *));
    for (int i = 0; i < filas; i++)
    {
        mat[i] = (int *)malloc(columnas * sizeof(int));
    }
    return mat;
}

void llenar_matriz(int **mat, int filas, int columnas)
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            mat[i][j] = rand() % 101;
        }
    }
}

int **trasponer_matriz(int **mat, int filas, int columnas)
{
    int **trans;
    trans = reservar_memoria(columnas, filas);
    for (int i = 0; i < columnas; i++)
    {
        for (int j = 0; j < filas; j++)
        {
            trans[i][j] = mat[j][i];
        }
    }
    return trans;
}

void mostrar_matriz(int **matriz, int filas, int columnas)
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void liberar_memoria(int **matriz, int filas)
{
    for (int i = 0; i < filas; i++)
    {
        free(matriz[i]);
    }
    free(matriz);
}
