/*
    BUCLES
    NIVEL 1
    EJERCICIO 07
    Pida un número entero entre 1 y 15 (controlar esto) y
    muestre el mismo número de asteriscos por pantalla.
*/

#include <stdio.h>

int main()
{
    int numero;
    do
    {
        printf("Ingrese un numero entero entre 1 y 15.\n");
        printf("> ");
        scanf("%d", &numero);
    } while (numero < 1 || numero > 15);
    for (int i = 0; i < numero; i++)
    {
        printf("* ");
    }
    return 0;
}
