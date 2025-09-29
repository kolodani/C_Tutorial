/*
    PRACTICA 2
    MEMORIA DINAMICA
    EJERCICIO 01:
    DETERMINANTE DE UNA MATRIZ
*/

#include <stdio.h>
#include <stdlib.h>

int verificar_valor();
int **reservar_memoria(int);
void rellenar_matriz(int **, int);
int determinante_matriz(int **, int);
void mostrar_matriz(int **, int);
void liberar_memoria(int **, int);

int main()
{
    int tamano, determinante;
    int **matriz;
    printf("Ingresa el tamaño de una matriz:\n");
    tamano = verificar_valor();
    matriz = reservar_memoria(tamano);
    rellenar_matriz(matriz, tamano);
    determinante = determinante_matriz(matriz, tamano);
    printf("El determinante de es: %d\n", determinante);
    printf("De la matriz:\n");
    mostrar_matriz(matriz, tamano);
    liberar_memoria(matriz, tamano);
    return 0;
}

int verificar_valor()
{
    int numero;
    do
    {
        printf("Ingresa un numero entero positivo: ");
        scanf("%d", &numero);
    } while (numero < 1);
}

int **reservar_memoria(int tama)
{
    int **puntero = (int **)malloc(tama * sizeof(int *));
    if(puntero == NULL)
    {
        return NULL;
    }
    for (int i = 0; i < tama; i++)
    {
        puntero[i] = (int *)malloc(sizeof(int));
        if (puntero[i] == NULL)
        {
            return NULL;
        }
    }
    return puntero;
}

void rellenar_matriz(int **matriz, int t)
{
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < t; j++)
        {
            printf("Ingresa el valor de la matriz %d-%d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
}

int determinante_matriz(int **matriz, int dimension)
{
    int i, j, k, l;
    int determinante = 0;
    if (dimension == 2)
    {
        determinante = matriz[0][0] * matriz[1][1] - matriz[0][1] * matriz[1][0];
    }
    else
    {
        for (i = 0; i < dimension; i++)
        {
            int **matrizAux;
            matrizAux = reservar_memoria(dimension - 1);
            for (j = 0; j < dimension - 1; j++)
            {
                for (k = 0; k < dimension - 1; k++)
                {
                    if (k < i)
                    {
                        matrizAux[j][k] = matriz[j + 1][k];
                    }
                    else
                    {
                        matrizAux[j][k] = matriz[j + 1][k + 1];
                    }
                }
            }
            if (i % 2 == 0)
            {
                l = 1;
            }
            else
            {
                l = -1;
            }
            determinante += matriz[0][i] * determinante_matriz(matrizAux, dimension - 1) * l;
            liberar_memoria(matrizAux, dimension - 1);
        }
    }
    return determinante;
}

void mostrar_matriz(int **matriz, int tama)
{
    for (int i = 0; i < tama; i++)
    {
        for (int j = 0; j < tama; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void liberar_memoria(int **matriz, int tama)
{
    for (int i = 0; i < tama; i++)
    {
        free(matriz[i]);
    }
    free(matriz);
}