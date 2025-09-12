/*
    ARRAYS
    NIVEL 1
    EJERCICIO 01
    Declare un array de 10 enteros y permita que el usuario ingrese valores
    comprendidos entre el -10 y el 10 (asegurar esto) y luego lo muestre por
    pantalla.
*/

#include <stdio.h>

#define MAX 10

int main()
{
    int arreglo[MAX];
    arreglo[0]= 100;
    printf("Ingrese 10 enteros para completar el arreglo\n");
    for (int i = 0; i < MAX; i++)
    {
        do
        {
            if (arreglo[i] > MAX || arreglo[i] < -MAX)
            {
                printf("El valor tiene que estar entre -10 y 10.\n");
            }
            printf("Ingrese el valor en el arreglo[%d]: ", i + 1);
            scanf("%d", &arreglo[i]);
        } while (arreglo[i] > MAX || arreglo[i] < -MAX);
    }
    printf("El arreglo terminado:\n");
    for (int i = 0; i < MAX; i++)
    {
        printf("%d, ", arreglo[i]);
    }
    return 0;
}
