/*
    FUNCIONES
    NIVEL 1
    EJERCICIO 03
    Reciba 3 floats indicando la longitud de los lados de un triángulo e indique
    si es posible formar un triángulo con dichos lados.
*/

#include <stdio.h>

#define LADOS 3 /* code */

float ingresar_lado(float);
char suma_lado(float, float, float);

int main()
{
    float lado[LADOS];
    char resul[LADOS];
    int contador = 0;

    printf("Ingrese los valores de tres lados y te dire si se puede formar un triangulo:\n");
    for (int i = 0; i < LADOS; i++)
    {
        lado[i] = ingresar_lado(lado[i]);
    }

    resul[0] = suma_lado(lado[0], lado[1], lado[2]);
    resul[1] = suma_lado(lado[1], lado[2], lado[0]);
    resul[2] = suma_lado(lado[2], lado[0], lado[1]);

    for (int i = 0; i < LADOS; i++)
    {
        if (resul[i] == 'n')
        {
            contador++;
        }
    }

        if (contador == 0)
    {
        printf("Se puede formar un triangulo con los lados, %f, %f, %f.\n", lado[0], lado[1], lado[2]);
    }
    else
    {
        printf("No se puede formar un triangulo con los lados , %f, %f, %f.\n", lado[0], lado[1], lado[2]);
    }

    return 0;
}

float ingresar_lado(float la)
{
    do
    {
        printf("Ingrese el lado: ");
        scanf("%f", &la);
    } while (la < 0);
    return la;
}

char suma_lado(float a, float b, float c)
{
    if (a > b + c)
    {
        return 'n';
    }
    return 's';
}
