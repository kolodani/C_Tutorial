/*
    ARRAYS
    NIVEL 1
    EJERCICIO 04
    Declare un array A de N floats, se realice la carga manual y pida al usuario un float f
    en el rango (0, 100] y en un nuevo array P establezca los elementos de esta forma.
    Cada elemento P[i] debe ser de la forma A[i]*f para i=0...N-1.
*/

#include <stdio.h>

int main()
{
    int n;
    float f;
    printf("Ingrese el tamaño del arreglo de numeros flotantes: ");
    scanf("%d", &n);

    float arregloA[n];
    for (int i = 0; i < n; i++)
    {
        printf("Ingresa el valor %d de %d del arreglo: ", i + 1, n);
        scanf("%f", &arregloA[i]);
    }

    printf("Ahora ingrese un flotante para multiplicar el arreglo:");
    scanf("%f", &f);

    printf("El nuevo arreglo creado es:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%f, ", arregloA[i] * f);
    }
    return 0;
}
