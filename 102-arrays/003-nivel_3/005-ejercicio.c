/*
    ARRAYS
    NIVEL 3
    EJERCICIO 05
    Dado un array A de 20 enteros positivos en el rango[0, 100] cargados aleatoriamente,
    y un entero positivo e, determinar si dicho entero e está presente en el array.
    Extender luego el programa para indicar no solo si está,
    sino también en cuantas ocasiones aparece.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 20
#define TOPE 100
#define PISO 0

int main()
{
    srand(time(NULL));

    int prediccion;
    int arreglo[MAX];
    int contador = 0;

    do
    {
        printf("Ingrese un numero y adivine si esta o no en el arreglo(0 a 100 inclusives): \n");
        scanf("%d", &prediccion);
    } while (prediccion < PISO || prediccion > TOPE);

    printf("El arreglo es:\n[ ");
    for (int i = PISO; i < MAX; i++)
    {
        arreglo[i] = rand() % (TOPE + 1);
        if (arreglo[i] == prediccion)
        {
            contador++;
        }
        printf("%d ", arreglo[i]);
    }
    printf("]\n");
    if (contador > PISO)
    {
        printf("El valor %d aparece: %d\n", prediccion, contador);
    }
    else
    {
        printf("La valor %d no aparece nunca.\n", prediccion);
    }

    return 0;
}
