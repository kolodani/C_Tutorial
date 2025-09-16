/*
    FUNCIONES
    NIVEL 1
    EJERCICIO 06
    Dado un entero, mediante una función determine cuantos dígitos tiene.
    Nota: usar tipo unsigned long long int
*/

#include <stdio.h>

int contador_digitos(unsigned long long int);

int main()
{
    unsigned long long int valor;
    int digitos;
    printf("Ingrese un entero y te dire cuantos digitos tiene: ");
    scanf("%llu", &valor);
    digitos = contador_digitos(valor);
    printf("El numero %llu tiene %d digitos.\n", valor, digitos);
    return 0;
}

int contador_digitos(unsigned long long int v)
{
    int digi = 1;
    while (v > 10)
    {
        v /= 10;
        digi++;
    }
    return digi;
}
