/*
    FUNCIONES
    NIVEL 2
    EJERCICIO 08 b
    En base al punto anterior, crear otra función que al invocarla sucesivamente
    retorne los valores enteros: 0, 1, 2, 3, 0, 1, 2, 3, …., 0, 1, 2, 3, etc.
*/

#include <stdio.h>

int func();

int main()
{
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        printf("%d ", func() % 4);
    }
    return 0;
}

int func()
{
    int static b = 0;
    return b++;
}
