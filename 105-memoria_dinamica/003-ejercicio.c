/*
    PRACTICA 2
    MEMORIA DINAMICA
    EJERCICIO 03:
    SUMA DE MATRICES
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int verificar_valor();
int **reservar_memoria(int);
void llenar_matriz(int **, int);
int **sumatoria(int **, int **, int);
void mostrar_matriz(int **, int);
void liberar_memoria(int **, int);

int main()
{
    srand(time(NULL));

    int ene;
    int **matrizA, **matrizB, **sumaMatriz;

    printf("Suma de Matrices.\n");
    printf("Ingrese el tamaño de las matrices:\n");
    ene = verificar_valor();

    matrizA = reservar_memoria(ene);
    llenar_matriz(matrizA, ene);
    matrizB = reservar_memoria(ene);
    llenar_matriz(matrizB, ene);
    sumaMatriz = sumatoria(matrizA, matrizB, ene);

    printf("Contenido de las matrices\n");
    printf("Matriz 1\n");
    mostrar_matriz(matrizA, ene);
    printf("Matriz 2\n");
    mostrar_matriz(matrizB, ene);
    printf("Suma\n");
    mostrar_matriz(sumaMatriz, ene);

    liberar_memoria(matrizA, ene);
    liberar_memoria(matrizB, ene);
    liberar_memoria(sumaMatriz, ene);

    matrizA = NULL;
    matrizB = NULL;
    sumaMatriz= NULL;

    return 0;
}

int verificar_valor()
{
    int numero;
    do
    {
        printf("Recuerda que tiene que ser positivo mayor a 1: ");
        scanf("%d", &numero);
    } while (numero <= 0);
    return numero;
}

int **reservar_memoria(int n)
{
    int **mat = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++)
    {
        mat[i] = (int *)malloc(n * sizeof(int));
    }
    return mat;
}

void llenar_matriz(int **mat, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mat[i][j] = rand() % 101;
        }
    }
}

int **sumatoria(int **matA, int **matB, int ene)
{
    int **resultado;
    resultado = reservar_memoria(ene);
    for (int i = 0; i < ene; i++)
    {
        for (int j = 0; j < ene; j++)
        {
            resultado[i][j] = matA[i][j] + matB[i][j];
        }
    }
    return resultado;
}

void mostrar_matriz(int **matriz, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

void liberar_memoria(int **matriz, int n)
{
    for (int i = 0; i < n; i++)
    {
        free(matriz[i]);
    }
    free(matriz);
}
