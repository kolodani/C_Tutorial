/*
    ARRAYS
    NIVEL 1
    EJERCICIO 06
    Declare un array de 10 enteros en el rango [0, 100] (asegurarlo) y muestre
    por pantalla dichos elementos junto con la suma, el promedio y la varianza.
    Investigar sobre los términos que desconozca.
*/

#include <stdio.h>

int main()
{
    int arreglo[10];
    int sumatoria = 0;
    int promedio;
    int varianza;

    printf("Ingresa enteros entre 0 y 100, para llenar el arreglo:\n");
    for (int i = 0; i < 10; i++)
    {
        do
        {
            printf("Ingresa el valor %d del arreglo: ", i + 1);
            scanf("%d", &arreglo[i]);
            if (arreglo[i] < 0 || arreglo[i] > 100)
            {
                printf("Ingrese valores entre 0 y 100 inclusive.\n");
            }
        } while (arreglo[i] < 0 || arreglo[i] > 100);
        sumatoria += arreglo[i];
    }

    promedio = sumatoria / 10;
    printf("La sumatoria es: %d\n", sumatoria);
    printf("El promedio es: %d\n", promedio);

    sumatoria = 0;
    for (int i = 0; i < 10; i++)
    {
        arreglo[i] = arreglo[i] - promedio;
        arreglo[i] = arreglo[i] * arreglo[i];
        sumatoria += arreglo[i];
    }
    varianza = sumatoria / 9;
    printf("La varianza es: %d\n", varianza);

    return 0;
}
