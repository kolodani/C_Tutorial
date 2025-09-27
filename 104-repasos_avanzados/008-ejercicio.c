/*
    PRACTICA 1
    NIVEL 1
    EJERCICIO 08:
    RETORNAR UN PUNTERO
*/

#include <stdio.h>

char *convertir(char[][10], int);

int main()
{
    int numero;
    char dias[7][10] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};
    char *dia;
    printf("Introduce un numero y te devolvere el dia de la semana:\n> ");
    scanf("%d", &numero);
    dia = convertir(dias, numero - 1);
    printf("El dia de la semana es: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%c", *(dia + i));
    }

    return 0;
}

char *convertir(char cal[][10], int n)
{
    char *puntero;
    puntero = &cal[n - 1][10];
    return puntero;
}
