/*
    BUCLES
    NIVEL 2
    EJERCICIO 04
    Calcule el promedio de N números, se dejarán de solicitar números hasta que se introduzca el cero.
*/

#include <stdio.h>

int main()
{
    int contador = 1, numero = 0, sumatoria = 0, promedio;
    printf("Ingresa numeros y te dire el promedio.\n");
    printf("Si ingresas Cero, termina el programa.\n");
    do
    {
        printf("%d) Ingresa un numero: ", contador);
        scanf("%d", &numero);
        sumatoria += numero;
        contador++;
    } while (numero != 0);
    promedio = sumatoria / contador;
    printf("El promedio de los numeros ingresados es: %d\n", promedio);
    return 0;
}
