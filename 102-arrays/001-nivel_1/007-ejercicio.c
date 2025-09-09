/*
    ARRAYS
    NIVEL 1
    EJERCICIO 07
    Declare dos arrays de 10 enteros con valores entre [0, 50] llamados M y N,
    luego determine si son:
        - iguales: cuando cada componente ubicada en misma posición coincide.
        - similares frente a suma: cuando no tienen las mismas componentes pero
            la suma de los elementos coincide
        - diferentes: cuando no coinciden ni en las componentes ni en la suma
*/

#include <stdio.h>

void crear_arreglo(int*);

int main()
{
    int arregloM[10], arregloN[10];
    int iguales = 0;
    int sumaM = 0, sumaN = 0;

    printf("Ingrese los valores de dos arreglos.\n");
    printf("Primer arreglo:\n");
    crear_arreglo(arregloM);
    printf("Segundo arreglo:\n");
    crear_arreglo(arregloN);

    for (int i = 0; i < 10; i++)
    {
        sumaM += arregloM[i];
        sumaN += arregloN[i];
        if (arregloM[i] == arregloN[i])
        {
            iguales++;
        }
    }

    if (iguales == 10)
    {
        printf("Los arreglos son iguales.\n");
    }
    else if (sumaM == sumaN)
    {
        printf("Las sumas de los arreglos son iguales.\n");
    }
    else
    {
        printf("Los arreglos son diferentes.\n");
    }

    return 0;
}

void crear_arreglo(int *arreglo)
{
    for (int i = 0; i < 10; i++)
    {
        do
        {
            printf("Ingrese el valor %d: ", i + 1);
            scanf("%d", &arreglo[i]);
        } while (arreglo[i] < 0 || arreglo[i] > 50);
    }
    printf("Arreglo finalizado.\n");
}
