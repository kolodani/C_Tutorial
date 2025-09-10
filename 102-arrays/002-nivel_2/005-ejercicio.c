/*
    ARRAYS
    NIVEL 2
    EJERCICIO 05
    Dado un array A de N enteros cargados manualmente o bien de forma automática
    y un número entero r en el rango [-(N-1), N-1].
    El valor r impondrá rotaciones a derecha (en caso de r positivo) o rotaciones
    a izquierda (en caso de r negativo) sobre los elementos del array A.
    Una rotación es el cambio de posición en los elementos del array.
    Ejemplo, un array A con N valiendo 10, r estará comprendido en [-9, 9].
    Es decir, dado el array
    A= [ 45, 11, -5, 80, 6, 99, 105, -200, 22, 1],
    Si r= 1 -> A= [ 1, 45, 11, -5, 80, 6, 99, 105, -200, 22 ]
    Todos los elementos rotaron 1 posición a la derecha
    Si r=-3 -> A= [ -5, 80, 6, 99, 105, -200, 22, 1, 45, 11 ]
    Todos los elementos rotaron 3 posiciones a la izquierda
*/

#include <stdio.h>

void crear_arreglo(int *, int);
void mostrar_arreglo(int *, int);
void rotar_arreglo(int *, int, int);

int main()
{
    int tamanio, rotacion;
    do
    {
        printf("Ingrese un tamaño de arreglo (entre 2 y 20): ");
        scanf("%d", &tamanio);
    } while (tamanio > 20 || tamanio < 2);

    int arregloA[tamanio];
    crear_arreglo(arregloA, tamanio);
    mostrar_arreglo(arregloA, tamanio);

    do
    {
        printf("Ingresa ahora un valor (entre %d y %d) para rotar el arreglo: ", (tamanio - 1) * -1, (tamanio - 1));
        scanf("%d", &rotacion);
    } while (rotacion >= tamanio || rotacion <= -1 * tamanio);
    if (rotacion < 0)
    {
        rotacion = tamanio + rotacion;
    }
    rotar_arreglo(arregloA, tamanio, rotacion);
    mostrar_arreglo(arregloA, tamanio);
    return 0;
}

void crear_arreglo(int *arr, int tama)
{
    for (int i = 0; i < tama; i++)
    {
        printf("Ingrese el valor %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void mostrar_arreglo(int *arr, int tama)
{
    printf("El arreglo: [");
    for (int i = 0; i < tama; i++)
    {
        printf("%d", arr[i]);
        if (i != tama - 1)
        {
            printf(", ");
        }
    }
    printf("]\n");
}

void rotar_arreglo(int *arr, int tama, int rota)
{
    int aux;
    while (rota != 0)
    {
        aux = arr[0];
        for (int i = 0; i < tama - 1; i++)
        {
            arr[i] = arr[i+1];
        }
        arr[tama - 1] = aux;
        rota--;
    }
}