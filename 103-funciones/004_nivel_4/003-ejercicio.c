/*
    FUNCIONES
    NIVEL 4
    EJERCICIO 03
    Implementar el algoritmo de Euclides para determinar el MCD entre dos enteros.
*/

#include <stdio.h>

int verificar(int);
int euclides(int, int);

int main()
{
    int enteroA, enteroB, resultado;
    printf("Ingrese dos enteros y te dire cual es el maximo comun divisor.\n");
    printf("El segundo tiene que ser mayor de los dos.\n");
    enteroA = verificar(0);
    enteroB = verificar(enteroA);
    resultado = euclides(enteroA, enteroB);
    printf("El maximo comun denominador de %d y %d es %d.\n", enteroA, enteroB, resultado);
    return 0;
}

int verificar(int a)
{
    int num;
    do
    {
        printf("Ingrese un entero: ");
        scanf("%d", &num);
        if (num <= a)
        {
            printf("Ingrese un numero mayor a %d.\n", a);
        }
    } while (num <= a);
    return num;
}

int euclides(int a, int b)
{
    int resto = 1, aux;
    while (resto != 0)
    {
        resto = b % a;
        aux = b;
        b = a;
        a = aux % a;
    }
    return b;
}
