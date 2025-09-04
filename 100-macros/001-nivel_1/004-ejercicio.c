/*
    MACROS
    NIVEL 1
    EJERCICIO 04
    Si un número X es divisible (de manera entera) por otro Y (considerar Y nunca es 0 )
*/

#include <stdio.h>

#define DIVISIBLE(X, Y) (X % Y == 0 ? "es Divisible" : "no es Divisible")

int main()
{
    int num_x, num_y;
    printf("Ingresa dos numeros y te dire si el primero es divisible del segundo:\n");
    printf("Ingresa el primer numero:\n");
    printf("> ");
    scanf("%d", &num_x);
    do
    {
        printf("Ingresa el segundo numero:\n");
        printf("> ");
        scanf("%d", &num_y);
        if (num_y == 0)
        {
            printf("El segundo numero no puede ser cero.\n");
        }
    } while (num_y == 0);
    printf("El numero %d, %s por %d", num_x, DIVISIBLE(num_x, num_y), num_y );
    return 0;
}
