/*
    FUNCIONES
    NIVEL 1
    EJERCICIO 01
    Crear un programa que permita pasar una cantidad de días y horas
    (especificados con enteros positivos, validar esto) a minutos.
*/

#include <stdio.h>

int controlador(int, int);

int main()
{
    int dias, horas, minutos;

    printf("Ingresa dias y horas, los convertire a minutos.\n");
    printf("Cantidad de dias:\n");
    dias = controlador(-1, 100);
    printf("Cantidad de horas:\n");
    horas = controlador(-1, 10000);

    minutos = horas * 60 + dias * 24 * 60;
    printf("%d dias y %d horas son: %d minutos.", dias, horas, minutos);
    return 0;
}

int controlador(int min, int max)
{
    int valor;
    do
    {
        printf("> ");
        scanf("%d", &valor);
        if (valor <= min || valor > max)
        {
            printf("El valor tiene que estar entre %d y %d.\n", min, max);
        }
    } while (valor <= min || valor > max);
    return valor;
}
