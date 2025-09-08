/*
    BUCLES
    NIVEL 2
    EJERCICIO 03
    Calcule la suma de los cuadrados de los 100 primeros números enteros.
*/

#include <stdio.h>

int main()
{
    int sumatoria = 0, potencia;
    int num = 1;
    printf("La suma de los cuadrados de los primeros 100 numeros enteros es:\n");
    for (int i = 1; i <= 100; i++)
    {
        potencia = i * i;
        sumatoria += potencia;
    }
    printf("%d", sumatoria);
    return 0;
}
