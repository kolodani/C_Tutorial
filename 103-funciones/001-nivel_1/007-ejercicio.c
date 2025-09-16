/*
    FUNCIONES
    NIVEL 1
    EJERCICIO 07
    Implementar una función que dado un entero determine si es capicúa,
    es decir que el valor del mismo sea el mismo si de lee del derecho o el revés.
*/

#include <stdio.h>

#define TRUE 1
#define FALSE 0

int invertir_numero(int);
int es_capicua(int);

int main()
{
    int numero, capicua, resultado;
    printf("Ingresa un entero y te dire si es capicúa o no: ");
    scanf("%d", &numero);
    capicua = invertir_numero(numero);
    resultado = es_capicua(numero);
    printf("El numero %d y el invertido es %d. ", numero, capicua);
    if (resultado == TRUE)
    {
        printf("Y son CAPICUA");
    }
    else
    {
        printf("Y son NO CAPICUA");
    }
    return 0;
}

int invertir_numero(int n)
{
    int capi = 0;
    while (n > 0)
    {
        capi = capi * 10 + (n % 10);
        n /= 10;
        printf("%d\n", capi);
    }
    return capi;
}

int es_capicua(int numero)
{
    int cantidad = 0;
    int auxiliar = numero;
    int distintos = 0;
    while (auxiliar > 0)
    {
        auxiliar /= 10;
        cantidad++;
    }
    int arreglo[cantidad];
    for (int i = 0; i < cantidad; i++)
    {
        arreglo[i] = numero % 10;
        numero /= 10;
    }
    for (int i = 0; i < cantidad; i++)
    {
        if (arreglo[i] != arreglo[cantidad - i - 1])
        {
            distintos++;
        }
    }
    if (distintos == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
