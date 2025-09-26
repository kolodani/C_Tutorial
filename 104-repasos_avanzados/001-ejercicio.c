/*
    PRACTICA 1
    NIVEL 1
    EJERCICIO 01:
    MATRIZ IDENTIDAD
*/

#include <stdio.h>

int main()
{
    int ene;
    do
    {
        printf("Ingrese un valor N (mayor a cero) y te dare la matriz identidad NxN:\n> ");
        scanf("%d", &ene);
    } while (ene <= 0);
    printf("La matriz identidad %dx%d:\n", ene, ene);
    for (int i = 0; i < ene; i++)
    {
        for (int j = 0; j < ene; j++)
        {
            if (i == j)
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
    return 0;
}
