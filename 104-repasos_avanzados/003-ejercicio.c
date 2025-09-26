/*
    PRACTICA 1
    NIVEL 1
    EJERCICIO 03:
    SUMA DE MATRICES
*/

#include <stdio.h>
#include <stdlib.h>

int verificar_tama();
int **reservar_matriz(int);
void completar_matriz(int **, int);
void suma_matrices(int **, int **, int **, int);
void mostar_matrices(int **, int);

int main()
{
    int tama;
    int **matrizA, **matrizB, **suma;

    tama = verificar_tama();
    matrizA = reservar_matriz(tama);
    matrizB = reservar_matriz(tama);
    suma = reservar_matriz(tama);

    printf("Primero ingresemos los valores de la matriz A:\n");
    completar_matriz(matrizA, tama);
    printf("Ahora ingresemos los valores de la matriz B:\n");
    completar_matriz(matrizB, tama);

    suma_matrices(suma, matrizA, matrizB, tama);

    printf("Contenido de las matrices:\n");
    printf("Matriz A:\n");
    mostar_matrices(matrizA, tama);
    printf("Matriz B:\n");
    mostar_matrices(matrizB, tama);
    printf("Matriz Suma:\n");
    mostar_matrices(suma, tama);

    return 0;
}

int verificar_tama()
{
    int n;
    do
    {
        printf("Ingrese un tamaño de matriz (entre 2 y 20): ");
        scanf("%d", &n);
    } while (n < 2 || n > 20);
    return n;
}

int **reservar_matriz(int n)
{
    int **matriz = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++)
    {
        matriz[i] = (int *)malloc(sizeof(int));
    }
    return matriz;
}

void completar_matriz(int **mat, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Ingrese el valor %d-%d: ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }
}

void suma_matrices(int **suma, int **a, int **b, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            suma[i][j] = a[i][j] + b[i][j];
        }
    }
}

void mostar_matrices(int **mat, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
