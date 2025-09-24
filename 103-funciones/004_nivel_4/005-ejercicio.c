/*
    FUNCIONES
    NIVEL 4
    EJERCICIO 05
    Crear una función recursiva para invertir un array.
*/

#include <stdio.h>

int verificar_tamano();
void llenar_arreglo(int *, int);
int invertir_arreglo(int *, int, int);
void mostrar(int *, int);

int main()
{
    int tamano;
    printf("Invertidor de arreglos.\n");
    tamano = verificar_tamano();

    int arreglo[tamano];
    llenar_arreglo(arreglo, tamano);
    printf("Tu arreglo:\n");
    mostrar(arreglo, tamano);
    invertir_arreglo(arreglo, 0, tamano - 1);
    printf("Tu arreglo invertido:\n");
    mostrar(arreglo, tamano);

    return 0;
}

int verificar_tamano()
{
    int tama;
    do
    {
        printf("Ingrese el tamaño del arreglo (entre 2 y 30): ");
        scanf("%d", &tama);
    } while (tama < 2 || tama > 30);
    return tama;
}

void llenar_arreglo(int *arr, int t)
{
    for (int i = 0; i < t; i++)
    {
        printf("Ingresa el valor %d del arreglo: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

int invertir_arreglo(int *arr, int inicio, int fin)
{
    int aux;
    if (inicio > fin)
    {
        return 0;
    }
    else
    {
        aux = arr[inicio];
        arr[inicio] = arr[fin];
        arr[fin] = aux;
    }
    return invertir_arreglo(arr, inicio + 1, fin - 1);
}

void mostrar(int *arr, int t)
{
    printf("[ ");
    for (int i = 0; i < t; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("]\n");
}
