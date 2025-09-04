/*
    MACROS
    NIVEL 2
    EJERCICIO 06
    Determinar si dos números son consecutivos,
    (5 y 4 o 33 y 34 lo son, pero 40 y 42 o bien 8 y 91 no lo son)
*/

#include <stdio.h>

#define CONSECUTIVOS(X, Y) (X - Y == 1 || Y - X == 1 ? "son concecutivos" : "no son consecutivos")

int main()
{
    int numeroX, numeroY;
    printf("Ingresa dos numeros enteros y te dire si son o no consecutivos:\n");
    printf("Ingresa el primer numero:\n");
    printf("> ");
    scanf("%d", &numeroX);
    printf("Ingresa el segundo numero:\n");
    printf("> ");
    scanf("%d", &numeroY);
    printf("Los numeros %d y %d %s", numeroX, numeroY, CONSECUTIVOS(numeroX, numeroY));
    return 0;
}
