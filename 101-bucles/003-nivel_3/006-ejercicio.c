/*
    BUCLES
    NIVEL 3
    EJERCICIO 06
    Empleando bucles for anidados intente generar las siguientes salidas por pantalla
*/

#include <stdio.h>

int main()
{
    printf("Bucles anidados:\n");

    printf("a)\n");
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("b)\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("+");
        }
        printf("\n");
    }

    printf("c)\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5 - i; j++)
        {
            printf("$");
        }
        printf("\n");
    }

    printf("d)\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if ((i + j) % 2 == 0)
            {
                printf("@");
            }
            else
            {
                printf(".");
            }
        }
        printf("\n");
    }

    return 0;
}

