/*
    BUCLES
    NIVEL 1
    EJERCICIO 06
    Calcule el promedio de 10 números ingresados por el usuario
*/

#include <stdio.h>

int main()
{
    int numeros[10];
    int sumatoria = 0;
    printf("Ingrese diez numeros y te dire el promedio.\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Numero %d:", i + 1);
        scanf("%d", &numeros[i]);
        sumatoria += numeros[i];
    }
    int promedio = sumatoria / 10;
    printf("El promedio es %d", promedio);
    return 0;
}
