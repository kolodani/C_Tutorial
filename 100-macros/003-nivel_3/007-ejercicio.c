/*
    MACROS
    NIVEL 3
    EJERCICIO 07
    Determinar el máximo entre tres enteros
    #define MAX(X,Y,Z) .....siguen uds.....
*/

#include <stdio.h>

#define MAX(X, Y, Z) (X > Y && X > Z ? X : (Y > Z ? Y : Z))

int main()
{
    int numeroX, numeroY, numeroZ;
    printf("Ingresa tres numeros enteros y te dire cual es el mayor:\n");
    printf("Ingresa el primer numero:\n");
    printf("> ");
    scanf("%d", &numeroX);
    printf("Ingresa el segundo numero:\n");
    printf("> ");
    scanf("%d", &numeroY);
    printf("Ingresa el tercer numero:\n");
    printf("> ");
    scanf("%d", &numeroZ);
    printf("De los numeros %d, %d y %d el mayor es %d\n", numeroX, numeroY, numeroZ, MAX(numeroX, numeroY, numeroZ));
    return 0;
}
