/*
    BUCLES
    NIVEL 2
    EJERCICIO 01
    Muestre los divisores de un número.
*/

#include <stdio.h>

int main()
{
    int numero;
    do
    {
        printf("Ingresa un numero entero positivo y ve sus divisores:\n");
        printf("> ");
        scanf("%d", &numero);
    } while (numero <= 0);
    printf("Los divisores de %d son: ", numero);
    for (int i = 1; i <= numero; i++)
    {
        if (numero % i == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
