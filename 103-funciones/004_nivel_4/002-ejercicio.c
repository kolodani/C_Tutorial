/*
    FUNCIONES
    NIVEL 4
    EJERCICIO 02
    Crear las siguientes funciones recursivas pero con recursividad de cola.
    suma(a, b) = a + b
    prod(a, b) = a * b
    exp(a, b) = ab
    factorial(n) = n!
    fib(n) = n-ésimo término de la sucesión de Fibonacci (1, 2, 3, 5, 8, 13, 21, 35, 55,…)
*/

#include <stdio.h>

int ingreso();
int suma(int, int);
int prod(int, int, int);
int expo(int, int, int);
int factorial(int, int);
int fibo(int, int, int);

int main()
{
    int resultado, a, b, acumulador1 = 0, acumulador2 = 1;
    printf("Funciones recursivas de cola:\n");

    printf("Primero suma recursiva, ingrese dos valores:\n");
    a = ingreso();
    b = ingreso();
    resultado = suma(a, b);
    printf("La suma de %d + %d es %d\n", a, b, resultado);

    printf("Seguimos con el producto recursivo, ingrese dos valores:\n");
    a = ingreso();
    b = ingreso();
    resultado = prod(a, b, acumulador1);
    printf("El producto de %d x %d es %d\n", a, b, resultado);

    printf("Ahora con el exponente recursivo, ingrese dos valores:\n");
    a = ingreso();
    b = ingreso();
    resultado = expo(a, b, acumulador2);
    printf("La potencia de %d ^ %d es %d\n", a, b, resultado);

    printf("Continuamos con el factorial recursivo, ingresa un valor:\n");
    a = ingreso();
    resultado = factorial(a, acumulador2);
    printf("El factorial de %d es %d\n", a, resultado);

    printf("Por ultimo fibonacci recursivo, ingresa un valor:\n");
    a = ingreso();
    resultado = fibo(a, acumulador1, acumulador2);
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

int prod(int a, int b, int acu)
{
    if (b == 0)
    {
        return acu;
    }
    return prod(a, b - 1, acu + a);
}

int expo(int a, int b, int acu)
{
    if (b == 0)
    {
        return acu;
    }
    return expo(a, b - 1, acu * a);
}

int factorial(int n, int acu)
{
    if (n == 0)
    {
        return acu;
    }
    return factorial(n - 1, acu * n);
}

int fibo(int n, int a, int b)
{
    if (n == 1)
    {
        return b;
    }
    else if (n == 0)
    {
        return a;
    }
    return fibo(n - 1, b, a + b);
}
