/*
    MACROS
    NIVEL 2
    EJERCICIO 05
    Determinar si un número está entre el 0 y el 100
*/

#include <stdio.h>

#define ENTRE_0_100(X) (X > 0 && X < 100 ? "Esta" : "No esta")

int main()
{
    int numeroX;
    printf("Ingresa un numero entero y te dire si esta entre 0 y 100:\n");
    printf("> ");
    scanf("%d", &numeroX);
    printf("El numero %d %s entre 0 y 100", numeroX, ENTRE_0_100(numeroX));
    return 0;
}
