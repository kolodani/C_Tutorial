/*
    FUNCIONES
    NIVEL 2
    EJERCICIO 08 a
    Ejecutar el siguiente programa y observar la salida
*/

#include <stdio.h>

int func();

int main()
{
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        printf("%d ", func());
    }
    return 0;
}

int func()
{
    int static b = 0;
    return b++;
}

/*
    La salida es 0 1 2 3 4 5 6 7 8 9
    ya que la variable estatica se declara una unica vez
    por eso cada vez que la invoca a la funcion no vuelve a valer 0
*/