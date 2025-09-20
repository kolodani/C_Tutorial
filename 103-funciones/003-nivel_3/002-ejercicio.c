/*
    FUNCIONES
    NIVEL 3
    EJERCICIO 02
    Calculo total de una compra.
    Crear un programa que permita tener almacenado el precio unitario de 5 productos diferentes.
    El usuario indica cuantos productos quiere comprar de cada tipo, para indicar ninguno ingresará 0,
    por supuesto evitar valores negativos.
    Si el usuario compra más de 10 productos de un mismo tipo, se debe aplicar un 8% de descuento
    sobre el costo total de los productos de ese tipo en particular.
    Si el usuario supera un monto máximo (especificarlo con una macro), se le debe aplicar un
    descuento del 15% al costo total de toda la compra.
    Crear funciones para: almacenar el precio de los 5 productos, permitir al usuario ingresar
    cuantos productos de cada tipo desea adquirir.
    Mostrar por pantalla los descuentos que obtuvo (si aplica alguno) y el costo total de la compra.
*/

#include <stdio.h>

#define PRO 5
#define MAXIMO 100.0

int cantidad_elegida(int);
float descuentos(int, float);
float final_factura(float[]);

int main()
{
    float productos[PRO] = {4.5, 8.3, 6.7, 9.9, 2.8};
    int cantidades[PRO];
    float precios[PRO];
    float total;

    printf("Ingrese la cantidad que quiere de cada producto:\n");
    for (int i = 0; i < PRO; i++)
    {
        cantidades[i] = cantidad_elegida(i);
    }

    printf("La factura:\n");
    for (int i = 0; i < PRO; i++)
    {
        precios[i] = descuentos(cantidades[i], productos[i]);
        printf("%d. Cant: %d x %f = %f", i + 1, cantidades[i], productos[i], precios[i]);
        if(cantidades[i] > 10)
        {
            printf(" (-8%)");
        }
        printf("\n");
    }

    total = final_factura(precios);
    printf("Total: %f", total);
    if (total > MAXIMO)
    {
        printf(" (-15%)");
    }
    printf("\n");

    return 0;
}

int cantidad_elegida(int i)
{
    int cantidad;
    do
    {
        printf("Cantidad del producto %d: ", i + 1);
        scanf("%d", &cantidad);
    } while (cantidad < 0);
    return cantidad;
}

float descuentos(int a, float b)
{
    float precio;
    if (a > 10)
    {
        precio = a * b * 0.92;
    }
    else
    {
        precio = a * b;
    }
    return precio;
}

float final_factura(float a[])
{
    float total = 0;
    for (int i = 0; i < PRO; i++)
    {
        total += a[i];
    }
    if (total >= MAXIMO)
    {
        total *= .85;
    }
    return total;
}