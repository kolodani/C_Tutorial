/*
    PRACTICA 2
    MEMORIA DINAMICA
    EJERCICIO 02:
    PRODUCTO ESCALAR
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int verificar_valor();
int **reservar_memoria(int, int);
void llenar_matriz(int **, int, int);
int **producto_escalar_matriz(int, int, int, int **);
void mostrar_matriz(int **, int, int);
void liberar_memoria(int**, int);

int main()
{
    srand(time(NULL));

    int escalar, filas, columnas;
    int **matriz, **resultado;

    printf("Producto escalar por una matriz.\n");
    printf("Ingrese primero el valor de producto escalar: ");
    scanf("%d", &escalar);
    printf("Ingrese ahora el tamaño de las filas de la matriz:\n");
    filas = verificar_valor();
    printf("Ingrese ahora el tamaño de las columnas de la matriz:\n");
    columnas = verificar_valor();
    matriz = reservar_memoria(filas, columnas);
    llenar_matriz(matriz, filas, columnas);
    resultado = producto_escalar_matriz(filas, columnas, escalar, matriz);
    printf("El producto escalar entre %d y la matriz:\n", escalar);
    mostrar_matriz(matriz, filas, columnas);
    printf("Es el siguiente:\n");
    mostrar_matriz(resultado, filas, columnas);
    liberar_memoria(matriz, filas);
    liberar_memoria(resultado, filas);
    matriz = NULL;
    resultado = NULL;
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

int **producto_escalar_matriz(int filas, int columnas, int escalar, int **mat)
{
    int **resultado;
    resultado = reservar_memoria(filas, columnas);
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            resultado[i][j] = escalar * mat[i][j];
        }
    }
    return resultado;
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
