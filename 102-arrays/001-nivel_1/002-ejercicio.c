/*
    ARRAYS
    NIVEL 1
    EJERCICIO 02
    Declare dos arrays de 5 enteros cada uno, llamados A y B,
    luego en un tercer array de igual dimensión llamado S almacene
    la suma de los dos anteriores.
*/

#include <stdio.h>

void crear_arreglo(int*);

int main()
{
    int arregloA[5], arregloB[5], suma[5];
    printf("Ingrese los valores del arreglo A:\n");
    crear_arreglo(arregloA);
    printf("Ahora ingrese los valores del arreglo B:\n");
    crear_arreglo(arregloB);
    printf("El arreglo de la suma de los dos arreglos es:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d, ", arregloA[i] + arregloB[i]);
    }
    return 0;
}

void crear_arreglo(int *arreglo)
{
    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese el valor %d del arreglo: ", i + 1 );
        scanf("%d", &arreglo[i]);
    }
}
