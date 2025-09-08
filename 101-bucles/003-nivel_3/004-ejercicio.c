/*
    BUCLES
    NIVEL 3
    EJERCICIO 04
    Muestre los 25 primeros números de la sucesión de Fibonacci.
*/

#include <stdio.h>

int main()
{
    int fibo0 = 0, fibo1 = 1, fiboSum;
    printf("Los primeros numeros de Fibonacci:\n");
    for (int i = 1; i <= 25; i++)
    {
        printf("%d, ", fibo0);
        fiboSum = fibo0 + fibo1;
        fibo0 = fibo1;
        fibo1 = fiboSum;
    }
    return 0;
}

