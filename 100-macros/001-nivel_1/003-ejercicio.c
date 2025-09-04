/*
    MACROS
    NIVEL 1
    EJERCICIO 03
    Si un número es par
*/

#include <stdio.h>

#define PAR(x) (x % 2 == 0 ? "Par" : "Impar")

int main()
{
    int numero;
    printf("Ingresa un numero entero y veremos si es par o impar:\n");
    printf("> ");
    scanf("%d", &numero);
    printf("El numero %d es %s", numero, PAR(numero));
    return 0;
}
