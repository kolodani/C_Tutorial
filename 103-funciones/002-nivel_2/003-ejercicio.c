/*
    FUNCIONES
    NIVEL 2
    EJERCICIO 03
    Dado un array de N enteros, crear una función para invertirlo y
    posteriormente mostrarlo por pantalla.
*/

#include <stdio.h>

void completar(int[], int);
void mostrar(int[], int);
void invertir(int[], int);

int main()
{
    int tamanio = 2;
    printf("Ingresa el tamaño del arreglo: ");
    scanf("%d", &tamanio);

    int arreglo[tamanio];
    completar(arreglo, tamanio);

    printf("El arreglo completo:\n");
    mostrar(arreglo, tamanio);

    invertir(arreglo, tamanio);
    printf("El arreglo invertido:\n");
    mostrar(arreglo, tamanio);

    return 0;
}

void completar(int arr[], int tama)
{
    for (int i = 0; i < tama; i++)
    {
        printf("Ingresa el valor %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void mostrar(int arr[], int tama)
{
    printf("[ ");
    for (int i = 0; i < tama; i++)
    {
        printf("%d", arr[i]);
        if (i != (tama - 1))
        {
            printf(", ");
        }
    }
    printf(" ]\n");
}

void invertir(int arr[], int tama)
{
    int aux;
    for (int i = 0; i < (tama / 2); i++)
    {
        aux = arr[i];
        arr[i] = arr[tama - 1 - i];
        arr[tama - 1 - i] = aux;
    }
}
