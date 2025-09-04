/*
    MACROS
    NIVEL 1
    EJERCICIO 01
    Minimo entre dos numeros
*/

#include <stdio.h>

#define MIN(x, y) (x < y ? x : y)

int main()
{
    int primero, segundo;
    printf("Ingresa dos numeros y te dire cual es el minimo:\n");
    printf("Primer numero:\n");
    printf("> ");
    scanf("%d", &primero);
    printf("Segundo numero:\n");
    printf("> ");
    scanf("%d", &segundo);
    printf("El menor numero de los dos es: %d", MIN(primero, segundo));
    return 0;
}
