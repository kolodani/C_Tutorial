/*
    FUNCIONES
    NIVEL 1
    EJERCICIO 02
    Reciba una temperatura expresada en grados Celsius y
    conviértala en Farenheit mediante una función.
    Crear además la función que realice la acción inversa.
*/

#include <stdio.h>

double convert_cel(double);
double convert_fah(double);

int main()
{
    double temp, resultado;
    int opcion;

    do
    {
        printf("Elija una opcion:\n");
        printf("1). Convertir a Celcius.\n");
        printf("2). Convertir a Farenheit.\n");
        printf("> ");
        scanf("%d", &opcion);
    } while (opcion != 1 && opcion != 2);

    printf("Ingrese el valor de la temperatura a convertir:\n");
    printf("> ");
    scanf("%lf", &temp);
    if (opcion == 1)
    {
        resultado = convert_cel(temp);
    }
    else if (opcion == 2)
    {
        resultado = convert_fah(temp);
    }
    else
    {
        printf("Opcion incorrecta.\n");
        return 1;
    }

    printf("La temperatura %lf convertida da: %lf", temp, resultado);

    return 0;
}

double convert_cel(double temp)
{
    return (temp - 32) * 5 / 9;
}

double convert_fah(double temp)
{
    return temp * 9 / 5 + 32;
}