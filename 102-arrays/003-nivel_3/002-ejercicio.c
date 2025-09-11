/*
    ARRAYS
    NIVEL 3
    EJERCICIO 02
    Permitir la carga automática de una matriz de dimensión NxN y mostrarla por pantalla.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int tamanio;
    srand(time(NULL));
    do
    {
        printf("Elija un tamaño para una matriz NxN (de 2 a 10): ");
        scanf("%d", &tamanio);
    } while (tamanio < 2 || tamanio > 10);

    int matriz[tamanio][tamanio];
    printf("Tu matriz es:\n");
    for (int i = 0; i < tamanio; i++)
    {
        for (int j = 0; j < tamanio; j++)
        {
            matriz[i][j] = rand() % 10;
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
