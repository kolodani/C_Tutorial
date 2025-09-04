/*
    MACROS
    NIVEL 1
    EJERCICIO 02
    Maximo entre dos numeros
*/

#include <stdio.h>

#define MAX(x, y) (x > y ? x : y)

int main()
{
    int primero, segundo;
    printf("Ingresa dos numeros y te dire cual es el Mayor:\n");
    printf("Primer numero:\n");
    printf("> ");
    scanf("%d", &primero);
    printf("Segundo numero:\n");
    printf("> ");
    scanf("%d", &segundo);
    printf("El mayor numero de los dos es: %d", MAX(primero, segundo));
    return 0;
}
