/*
    BUCLES
    NIVEL 1
    EJERCICIO 02
    Muestre los números impares que hay entre 1 y 100.
*/

#include <stdio.h>

int main()
{
    for (int i = 1; i < 101; i++)
    {
        if(i % 2 != 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
