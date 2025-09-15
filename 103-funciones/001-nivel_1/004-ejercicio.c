/*
    FUNCIONES
    NIVEL 1
    EJERCICIO 04
    Implementar funciones que permitan pasar pesos argentinos a dólares
    estadounidenses y a pesos chilenos.
*/

#include <stdio.h>

#define DOLAREEUU 0.000068181627
#define PESOCHI 0.66

float a_dolar_estadounidense(float);
float a_pesos_chilenos(float);

int main()
{
    int opcion;
    float valor, resultado;
    printf("Convertidor de monedas, de peso argentino a:\n");
    printf("1) A dolares estadounidenses.\n");
    printf("2) A pesos chilenos.\n");
    printf("> ");
    scanf("%d", &opcion);

    if (opcion != 1 && opcion != 2)
    {
        printf("La opcion no es correcta.\n");
        return 1;
    }

    printf("Ingrese la cantidad a convertir: \n");
    scanf("%f", &valor);
    if (opcion == 1)
    {
        resultado = a_dolar_estadounidense(valor);
    }
    else if (opcion == 2)
    {
        resultado = a_pesos_chilenos(valor);
    }


    printf("Pasamos de %f a %f.\n", valor, resultado);
    return 0;
}

float a_dolar_estadounidense(float v)
{
    return v * DOLAREEUU;
}

float a_pesos_chilenos(float v)
{
    return v * PESOCHI;
}
