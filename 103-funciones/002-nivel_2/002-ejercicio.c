/*
    FUNCIONES
    NIVEL 2
    EJERCICIO 02
    Crear un programa que implemente las siguientes funciones para manipular un array de 10 enteros.
    Las siguientes declaraciones de funciones deben utilizarse y definirse adecuadamente.
    void cargar(int []);
        carga un array con valores suministrados por el usuario
    void mostrar(int []);
        muestra un array
    int pertenece(int [], int);
        determina si un entero está en el array
*/

#include <stdio.h>

#define DIEZ 10
#define TRUE 1
#define FALSE 0

void cargar(int[]);
void mostrar(int[]);
int pertenece(int[], int);

int main()
{
    int arreglo[DIEZ];
    int valor, respuesta;
    printf("Ingrese los valores del arreglo:\n");
    cargar(arreglo);
    printf("El arreglo completo es este:\n");
    mostrar(arreglo);
    printf("Ingrese un valor y te dire si esta en el arreglo:");
    scanf("%d", &valor);
    respuesta = pertenece(arreglo, valor);
    if (respuesta == TRUE)
    {
        printf("El valor %d, SI esta en el arreglo.\n", valor);
    }
    else
    {
        printf("El valor %d, NO esta en el arreglo.\n", valor);
    }
    return 0;
}

void cargar(int arr[])
{
    for (int i = 0; i < DIEZ; i++)
    {
        printf("Ingresa el valor %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void mostrar(int arr[])
{
    printf("[ ");
    for (int i = 0; i < DIEZ; i++)
    {
        printf("%d", arr[i]);
        if (i != 9)
        {
            printf(", ");
        }
    }
    printf(" ]\n");
}

int pertenece(int arr[], int valor)
{
    int esta = 0;
    for (int i = 0; i < DIEZ; i++)
    {
        if (arr[i] == valor)
        {
            esta++;
        }
    }
    if (esta == 0)
    {
        return FALSE;
    }
    return TRUE;
}
