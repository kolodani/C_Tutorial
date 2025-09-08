/*
    BUCLES
    NIVEL 3
    EJERCICIO 02
    Calcule el factorial de un número entero positvo.
*/

#include <stdio.h>

int factorial(int);

int main()
{
    int numero, resultado;
    do
    {
        printf("Ingrese un numero positivo y te mostrare su factorial: ");
        scanf("%d", &numero);
    } while (numero < 1);
    resultado = factorial(numero);
    printf("El factorial de %d es: %d", numero, resultado);
    return 0;
}

int factorial(int n){
    if (n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
