/*
    BUCLES
    NIVEL 2
    EJERCICIO 02
    Pida un número por teclado y decir si es un número primo o no.
    Controlar que el usuario ingrese un número mayor a 0.
*/

#include <stdio.h>

int main()
{
    int numero, contador = 0;
    do
    {
        printf("Ingresa un numero entero positivo y te dire si es primo:\n");
        printf("> ");
        scanf("%d", &numero);
    } while (numero <= 0);
    for (int i = 1; i <= numero; i++)
    {
        if (numero % i == 0)
        {
            contador++;
        }
    }
    if (contador > 2)
    {
        printf("El numero no es primo\n");
    }
    else
    {
        printf("El numero es primo\n");
    }
    return 0;
}
