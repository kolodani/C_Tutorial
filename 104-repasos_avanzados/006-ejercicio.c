/*
    PRACTICA 1
    NIVEL 1
    EJERCICIO 06:
    ESCRIBA UN PROGRAMA QUE DESFINA LAS SIGUIENTES VARIABLES
*/

#include <stdio.h>

int main()
{
    int i = 5, j[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    char x = 'a', pal[] = "tecto en c";
    int *pi;
    char *pc;

    // 1.Mostrar la direccion de "i" y su valor.
    printf("Direccion de i: %p, y el valor de i: %d\n", &i, i);
    // 2.Mostrar lo mismos valores a través del puntero "pi".
    pi = &i;
    printf("Direccion de pi: %p, y el valor de pi: %d\n", &i, i);
    // 3.Recorrer el vector "j" mostrando para cada elemento, su dirección y valor.
    for (int k = 0; k < 10; k++)
    {
        printf("Direccion de j[%d]: %p, y el valor de j[%d]: %d\n", k, &j[k], k, j[k]);
    }
    // 4.Recorra el vector accediendo a travéz del puntero "pi" y usando álgebra de punteros.
    pi = &j[0];
    for (int k = 0; k < 10; k++)
    {
        printf("Direccion de pi(%d): %p, y el valor de pi(%d): %d\n", k, (pi + k), k, *(pi + k));
    }
    // 5.Repita lo mismo con las variables char, el arreglo y el puntero.
    printf("Direccion de x: %p, y el valor de x: %c\n", &x, x);
    for (int k = 0; k < 10; k++)
    {
        printf("Direccion de pal[%d]: %p, y el valor de pal[%d]: %c\n", k, &pal[k], k, pal[k]);
    }
    pc = &pal[0];
    for (int k = 0; k < 10; k++)
    {
        printf("Direccion de pal(%d): %p, y el valor de pal(%d): %c\n", k, pc + k, k, *(pc + k));
    }
    // 6.Finalmente muestre la direccióñ donde se almacenan ambos punteros.
    printf("Direccion de pi: %p\n", &pi);
    printf("Direccion de pc: %p\n", &pc);

    return 0;
}
