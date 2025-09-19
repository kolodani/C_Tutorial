/*
    FUNCIONES
    NIVEL 2
    EJERCICIO 07
    Crear funciones para pasar un número de binario a decimal y de decimal a binario.
*/

#include <stdio.h>
#include <math.h>

#define MAX 32

int decimal_a_binario(int[], int);
int binario_a_decimal(int);

int main()
{
    int binari[MAX];
    int opcion = 0, auxiliar = 0, numero;
    printf("Ingrese una opcion:\n");
    printf("1. De Binario a Decimal.\n");
    printf("2. De Decimal a Binario.\n");
    printf("> ");
    scanf("%d", &opcion);
    printf("Ingrese el valor a convertir: ");
    scanf("%d", &numero);
    if (opcion == 1)
    {
        auxiliar = binario_a_decimal(numero);
        printf("El numero %d es en decimal: %d", numero, auxiliar);
    }
    else if (opcion == 2)
    {
        auxiliar = decimal_a_binario(binari, numero);
        printf("El numero %d es en binario: ", numero);
        for (int i = auxiliar; i >= 0; i--)
        {
            printf("%d", binari[i]);
        }
    }

    return 0;
}

int decimal_a_binario(int arr[], int n)
{
    int tama = 1;
    for (int i = 0; i < MAX; i++)
    {
        arr[i] = n % 2;
        if (n == 1)
        {
            tama = i;
            break;
        }
        n /= 2;
    }
    return tama;
}

int binario_a_decimal(int n)
{
    int w = 0, resultado = 0;
    while (n > 0)
    {
        resultado = resultado + (n % 10) * pow(2,w);
        n /= 10;
        w++;
    }
    return resultado;
}
