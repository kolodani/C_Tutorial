/*
    BUCLES
    NIVEL 3
    EJERCICIO 03
    Muestre las tablas de multiplicar del 1 al 10.
*/

#include <stdio.h>

int main()
{
    printf("Tabla de multiplicar del 1 al 10.\n");
    printf("\t");
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\t", i);
    }
    printf("\n----------------------------------------------------------------------------------\n");
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\t|", i);
        for (int j = 1; j <= 10; j++)
        {
            printf("%d\t", i * j);
        }
        printf("\n");
    }
    return 0;
}

