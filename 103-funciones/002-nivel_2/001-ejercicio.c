/*
    FUNCIONES
    NIVEL 2
    EJERCICIO 01
    Realizar un programa que permita obtener los enteros primos comprendidos entre 1 y 500.
    Implementar una función para determinar si un número es o no primo.
*/

#include <stdio.h>

#define TRUE 1
#define FALSE 0

int es_primo(int);

int main()
{
    int primo;
    printf("Los numeros primos del 1 al 500:\n");
    for (int i = 1; i < 500; i++)
    {
        primo = es_primo(i);
        if (primo == TRUE)
        {
            printf("%d, ", i);
        }
    }
    return 0;
}

int es_primo(int n)
{
    int cantidad = 0;
    for (int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            cantidad++;
        }
    }
    if (cantidad <= 2)
    {
        return TRUE;
    }
    return FALSE;
}