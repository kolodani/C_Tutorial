/*
    ARRAYS
    NIVEL 1
    EJERCICIO 05
    Dado un array de 10 floats, mostrar por pantalla cuales elementos superan al promedio.
*/

#include <stdio.h>

int main()
{
    float arreglo[10];
    float sumatoria = 0.0;
    float promedio;

    printf("Ingrese los 10 valores flotantes del arreglo:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Valor numero %d: ", i + 1);
        scanf("%f", &arreglo[i]);
        sumatoria += arreglo[i];
    }

    promedio = sumatoria / 10.0;
    printf("Los valores que estan sobre el promedio %f son:\n", promedio);
    for (int i = 0; i < 10; i++)
    {
        if (arreglo[i] > promedio)
        {
            printf("Valor numero %d: %.2f\n", i + 1, arreglo[i]);
        }
    }

    return 0;
}
