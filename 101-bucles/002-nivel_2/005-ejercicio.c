/*
    BUCLES
    NIVEL 2
    EJERCICIO 05
    Reciba tres enteros positivos n, p y m, asegurándose que n<m
    - genere la salida n, n+p, n+2.p, n+3.p, …. k (k<=m y es de la forma n+NRO.p)
    Ejemplo n=2, p=3, m=10, debe generarse: 2, 5, 8
    Ejemplo n=1, p=4, m=21, debe generarse 1,5,9,13,17,21
*/

#include <stdio.h>

int main()
{
    int numeroN, numeroM, salto;
    printf("Ingrese dos numeros, y un tercero para hacer el salto.\n");
    printf("Ingresa el numero del inicio del intervalo: ");
    scanf("%d", &numeroN);
    do
    {
        printf("Ingresa el numero del fin del invervalo: ");
        scanf("%d", &numeroM);
        if (numeroN >= numeroM)
        {
            printf("El fin del intervalo tiene que ser un numero mayor al inicio.\n");
        }
    } while (numeroN >= numeroM);
    printf("Por ultimo, ingrese el salto que se va a realizar en el intervalo: ");
    scanf("%d", &salto);
    printf("Secuencia: ");
    while (numeroN <= numeroM)
    {
        printf("%d ", numeroN);
        numeroN += salto;
    }
    return 0;
}
