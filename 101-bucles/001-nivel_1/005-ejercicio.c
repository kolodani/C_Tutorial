/*
    BUCLES
    NIVEL 1
    EJERCICIO 05
    Pida dos números y multiplique todos los números comprendidos entre el primero y el segundo (inclusive).
    Debe controlarse que el segundo número sea mayor que el primero.
*/

#include <stdio.h>

int main()
{
    int primero, segundo, sumatoria = 1;
    printf("Ingrese dos numeros, te dare la sumatoria de todos los numeros comprendidos entre ellos.\n");
    printf("Ingresa el primer numero:\n");
    printf("> ");
    scanf("%d", &primero);
    do
    {
        printf("Ingresa el segundo numero:\n");
        printf("> ");
        scanf("%d", &segundo);
        if (primero >= segundo)
        {
            printf("Ingrese un numero mayor que %d para continuar.\n", primero);
        }
    } while (primero >= segundo);
    for (int i = primero; i <= segundo; i++)
    {
        sumatoria *= i;
    }
    printf("La suma de los numeros desde %d hasta %d es %d", primero, segundo, sumatoria);
    return 0;
}
