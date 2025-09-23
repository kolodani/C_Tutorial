/*
    FUNCIONES
    NIVEL 4
    EJERCICIO 01
    Crear las siguientes funciones recursivas
    suma(a, b) = a + b
    prod(a, b) = a * b
    exp(a, b) = ab
    factorial(n) = n!
    fib(n) = n-ésimo término de la sucesión de Fibonacci (1, 2, 3, 5, 8, 13, 21, 35, 55,…)
*/

#include <stdio.h>

int ingreso();
int suma(int, int);
int prod(int, int);
int expo(int, int);
int factorial(int);
int fibo(int);

int main()
{
    int resultado, a, b;
    printf("Funciones recursivas:\n");

    printf("Primero suma recursiva, ingrese dos valores:\n");
    a = ingreso();
    b = ingreso();
    resultado = suma(a, b);
    printf("La suma de %d + %d es %d\n", a, b, resultado);

    printf("Seguimos con el producto recursivo, ingrese dos valores:\n");
    a = ingreso();
    b = ingreso();
    resultado = prod(a, b);
    printf("El producto de %d x %d es %d\n", a, b, resultado);

    printf("Ahora con el exponente recursivo, ingrese dos valores:\n");
    a = ingreso();
    b = ingreso();
    resultado = expo(a, b);
    printf("La potencia de %d ^ %d es %d\n", a, b, resultado);

    printf("Continuamos con el factorial recursivo, ingresa un valor:\n");
    a = ingreso();
    resultado = factorial(a);
    printf("El factorial de %d es %d\n", a, resultado);

    printf("Por ultimo fibonacci recursivo, ingresa un valor:\n");
    a = ingreso();
    resultado = fibo(a);
    printf("El valor %d en fibonacci es %d\n", a, resultado);

    return 0;
}

int ingreso()
{
    int a;
    do
    {
        printf("> ");
        scanf("%d", &a);
        if (a <= 0)
        {
            printf("Ingrese un valor mayor a cero.\n");
        }
    } while (a <= 0);
    return a;
}

int suma(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return suma(a + 1, b - 1);
}

int prod(int a, int b)
{
    if (b == 1)
    {
        return a;
    }
    return a + prod(a, b - 1);
}

int expo(int a, int b)
{
    if (b == 1)
    {
        return a;
    }
    return a * expo(a, b - 1);
}

int factorial(int n)
{
    if (n == 1)
    {
        return n;
    }
    return n * factorial(n - 1);
}

int fibo(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else if (n == 0)
    {
        return 0;
    }
    return fibo(n-1) + fibo(n-2);
}
