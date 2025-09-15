/*
    FUNCIONES
    NIVEL 1
    EJERCICIO 05
    Dado un entero, crear una función que muestre por pantalla todos sus divisores.
*/

#include <stdio.h>

void mostrar_divisores(int);

int main()
{
    int valor;
    printf("Ingrese un numero y te mostrare todos sus divisores:\n");
    printf("> ");
    scanf("%d", &valor);
    mostrar_divisores(valor);
    return 0;
}

void mostrar_divisores(int a)
{
    printf("Los divisores de %d son: ", a);
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            printf("%d ", i);
        }
    }
}
