/*
    FUNCIONES
    NIVEL 1
    EJERCICIO 08
    Crear una función que recibe un entero positivo menor o igual a a 10 e
    imprima por pantalla una pirámide similar a esta.
    Ejemplo para 5.
    Tip: tener en cuenta los espacios y antes de programar pensar en el algoritmo.
*/

#include <stdio.h>

int setear_numero();
void piramides(int);

int main()
{
    int altura;
    altura = setear_numero();
    piramides(altura);
    return 0;
}

int setear_numero()
{
    int numero;
    do
    {
        printf("Ingrese un numero entre 2 y 10, te dare una piramide: ");
        scanf("%d", &numero);
    }
    while (numero < 2 || numero > 10);
    return numero;
}

void piramides(int al)
{
    for (int i = 1; i <= al; i++)
    {
        int espacio = i;
        for (int j = 1; j <= al - i; j++)
        {
            printf(" ");
        }
        if (i > 1)
        {
            for (int k = 1; k < i; k++)
            {
                printf("%d", k);
            }
        }
        printf("%d", i);
        if (i > 1)
        {
            for (int k = 1; k < i; k++)
            {
                printf("%d", i - k);
            }
        }
        for (int j = 1; j <= al - i; j++)
        {
            printf(" ");
        }
        printf("\n");
    }
}
