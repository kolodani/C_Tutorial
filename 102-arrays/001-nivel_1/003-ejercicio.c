/*
    ARRAYS
    NIVEL 1
    EJERCICIO 03
    Declare un array de 10 enteros, permita la carga manual y luego determine lo siguiente:
        - cuantos elementos son positivos y pares
        - cuantos elementos son positivos e impares
        - cuantos elementos son negativos y pares
        - cuantos elementos son negativos e impares
*/

#include <stdio.h>

int main()
{
    int arreglo[10];
    int positivos_pares = 0;
    int positivos_impares = 0;
    int negativos_pares = 0;
    int negativos_impares = 0;
    printf("Ingrese 10 valores para un arraglo:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Valor %d del arreglo: ", i + 1);
        scanf("%d", &arreglo[i]);
    }
    printf("El arreglo terminado:\n");
    for (int i = 0; i < 10; i++)
    {
        if (arreglo[i] % 2 == 0)
        {
            if (arreglo[i] >= 0)
            {
                positivos_pares++;
            }
            else
            {
                negativos_pares++;
            }
        }
        else
        {
            if (arreglo[i] >= 0)
            {
                positivos_impares++;
            }
            else
            {
                negativos_impares++;
            }
        }
        printf("%d, ", arreglo[i]);
    }
    printf("\nEn el arreglo hay:\n");
    printf("Positivos pares: %d\n", positivos_pares);
    printf("Positivos impares: %d\n", positivos_impares);
    printf("Negativos pares: %d\n", negativos_pares);
    printf("Negativos impares: %d\n", negativos_impares);
    return 0;
}
