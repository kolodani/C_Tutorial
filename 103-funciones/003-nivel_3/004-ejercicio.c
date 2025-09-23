/*
    FUNCIONES
    NIVEL 3
    EJERCICIO 04
    Crear un programa que permita emular el lanzamiento de un dado.
    - El programa debe permitir al usuario “apostar” a un número n entre 1 y 6
    (validar rango) e indicar cuantas veces desea lanzar el dado
    (mínimo 5 veces, máximo 30 veces, validarlo). Cada “lanzamiento” es un número aleatorio en [1, 6].
    - Al finalizar con los “lanzamientos”, se debe mostrar la cantidad de apariciones de cada número.
    - Si el número que indicó es el que más veces apareció recibirá el mensaje de “excelente”,
    si su número elegido fue el segundo en orden de apariciones el mensaje será “muy bueno” y
    luego los mensajes serán “bueno”, “regular”, “malo” y “muy malo”, dependiendo de la cantidad de
    ocurrencias del número que arriesgó respecto a los otros números.
    Ejemplo: elige el número 2 y 20 lanzamientos
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MINIMO 5
#define MAXIMO 30
#define UNO 1
#define SEIS 6

int verificador(int, int);
void partidas(int *, int, int *);
int resolucion(int*, int);

int main()
{
    srand(time(NULL));
    int lado, lanzamientos, total;
    int cantidades[SEIS] = {0, 0, 0, 0, 0, 0};
    char resultados[SEIS][MAXIMO/2] = {
        "Muy malo",
        "Malo",
        "Regular",
        "Bueno",
        "Muy bueno",
        "Excelente",
    };

    printf("Elije el lado que quieres que salga en los dados.\n");
    lado = verificador(UNO, SEIS);
    printf("Ahora elige la cantidad de veces que vamos a tirar el dado.\n");
    lanzamientos = verificador(MINIMO, MAXIMO);

    int rondas[lanzamientos];
    partidas(rondas, lanzamientos, cantidades);
    total = resolucion(cantidades, lado);
    printf("Los resultados fueron:\n");
    for (int i = 0; i < lanzamientos; i++)
    {
        printf("%d ", rondas[i]);
    }
    printf("\nY tu eleccion del numero %d fue: %s", lado, resultados[total]);
    return 0;
}

int verificador(int a, int b)
{
    int numero;
    do
    {
        printf("Elige un numero entre el %d y el %d.\n> ", a, b);
        scanf("%d", &numero);
    } while (numero < a || numero > b);
    return numero;
}

void partidas(int *arr, int lanza, int *cant)
{
    for (int i = 0; i < lanza; i++)
    {
        arr[i] = (rand() % 6) + 1;
        cant[arr[i] - 1]++;
    }
}

int resolucion(int *cant, int l)
{
    int resultado = 0;
    for (int i = 0; i < SEIS; i++)
    {
        if (cant[i] < cant[l-1])
        {
            resultado++;
        }
    }
    return resultado;
}
