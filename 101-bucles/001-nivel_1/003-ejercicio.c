/*
    BUCLES
    NIVEL 1
    EJERCICIO 03
    Muestre la suma de todos los números impares que van del 1 al 100.
*/

#include <stdio.h>

int main()
{
    int sumatoria = 0;
    for (int i = 1; i <= 100; i++)
    {
        if(i % 2 != 0)
        {
            sumatoria += i;
        }
    }
    printf("La suma de todos los numeros impares es: %d\n", sumatoria);
    return 0;
}
