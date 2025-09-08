/*
    BUCLES
    NIVEL 3
    EJERCICIO 01
    Muestre el abecedario por pantalla
*/

#include <stdio.h>

int main()
{
    printf("El abecedario:\n");
    for (int i = 'A'; i <= 'Z'; i++)
    {
        printf("%c, ", i);
    }
    return 0;
}
