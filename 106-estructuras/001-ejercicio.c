/*
    PRACTICA ESTRUCTURA
    ESTRUCTURA
    EJERCICIO 01:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MILLON 1000000
#define DOCE 12
#define TREINTAUNO 31
#define VEINTICUATRO 24
#define SESENTA 60
#define CINCO 5

typedef struct tiempo
{
    int anio, mes, dia, hora, minuto, segundo;
} Tiempo;

typedef struct
{
    char *nombre;
    Tiempo ultima_mod;
} Archivo;

int verificador_tiempo(int);
int compara_tiempos(Tiempo *, Tiempo *);
void imprime_tiempo(Tiempo *);
void ordena_alfa(Archivo *, int);
void ordena_temportal(Archivo *, int);
void imprimir_archivo(Archivo *, int);

int main()
{
    int resultado;
    Tiempo *t1, *t2;
    t1 = (Tiempo *)malloc(sizeof(Tiempo));
    t2 = (Tiempo *)malloc(sizeof(Tiempo));

    Archivo lista[CINCO] = {
        "ccc.txt",
        {2025, 6, 7, 15, 56, 25},
        "eee.txt",
        {2021, 7, 6, 17, 46, 24},
        "aaa.txt",
        {2023, 8, 5, 20, 36, 26},
        "bbb.txt",
        {2022, 9, 4, 8, 26, 23},
        "ddd.txt",
        {2024, 10, 3, 1, 16, 27},
    };

    printf("Parte uno del ejercicio, controlar que funcionen las primeras dos funciones:\n");
    printf("Ingrese la primer fecha completa\n");
    printf("Ingrese el año:\n");
    t1->anio = verificador_tiempo(MILLON);
    printf("Ingrese el mes:\n");
    t1->mes = verificador_tiempo(DOCE);
    printf("Ingrese el dia:\n");
    t1->dia = verificador_tiempo(TREINTAUNO);
    printf("Ingrese la hora:\n");
    t1->hora = verificador_tiempo(VEINTICUATRO);
    printf("Ingrese los minutos:\n");
    t1->minuto = verificador_tiempo(SESENTA);
    printf("Ingrese los segundos:\n");
    t1->segundo = verificador_tiempo(SESENTA);

    printf("Ingrese la segunda fecha completa\n");
    printf("Ingrese el año:\n");
    t2->anio = verificador_tiempo(MILLON);
    printf("Ingrese el mes:\n");
    t2->mes = verificador_tiempo(DOCE);
    printf("Ingrese el dia:\n");
    t2->dia = verificador_tiempo(TREINTAUNO);
    printf("Ingrese la hora:\n");
    t2->hora = verificador_tiempo(VEINTICUATRO);
    printf("Ingrese los minutos:\n");
    t2->minuto = verificador_tiempo(SESENTA);
    printf("Ingrese los segundos:\n");
    t2->segundo = verificador_tiempo(SESENTA);

    resultado = compara_tiempos(t1, t2);

    if (resultado == 1)
    {
        printf("El tiempo t1: ");
        imprime_tiempo(t1);
        printf(" es anterior al tiempo t2: ");
        imprime_tiempo(t2);
        printf("\n");
    }
    else if (resultado == -1)
    {
        printf("El tiempo t2: ");
        imprime_tiempo(t2);
        printf(" es anterior al tiempo t1: ");
        imprime_tiempo(t1);
        printf("\n");
    }
    else if (resultado == 0)
    {
        printf("El tiempo t1: ");
        imprime_tiempo(t1);
        printf(" es igual al tiempo t2: ");
        imprime_tiempo(t2);
        printf("\n");
    }
    else
    {
        printf("Error de valor en resultado: %d\n", resultado);
    }

    printf("Parte dos del ejercicio, acomodando arreglos :\n");

    printf("Arreglo desordenado:\n");
    for (int i = 0; i < CINCO; i++)
    {
        imprimir_archivo(&lista[i], CINCO);
    }

    printf("Arreglo ordenado alfabeticamente:\n");
    ordena_alfa(lista, CINCO);
    for (int i = 0; i < CINCO; i++)
    {
        imprimir_archivo(&lista[i], CINCO);
    }

    printf("Arreglo ordenado alfabeticamente:\n");
    ordena_temportal(lista, CINCO);
    for (int i = 0; i < CINCO; i++)
    {
        imprimir_archivo(&lista[i], CINCO);
    }

    free(t1);
    free(t2);

    return 0;
}

int verificador_tiempo(int control)
{
    int numero;
    do
    {
        printf("> ");
        scanf("%d", &numero);
    } while (numero <= 0 || numero >= control);
    return numero;
}

int compara_tiempos(Tiempo *t1, Tiempo *t2)
{
    if (t1->anio < t2->anio)
    {
        return 1;
    }
    else if (t2->anio < t1->anio)
    {
        return -1;
    }

    if (t1->mes < t2->mes)
    {
        return 1;
    }
    else if (t2->mes < t1->mes)
    {
        return -1;
    }

    if (t1->dia < t2->dia)
    {
        return 1;
    }
    else if (t2->dia < t1->dia)
    {
        return -1;
    }

    if (t1->hora < t2->hora)
    {
        return 1;
    }
    else if (t2->hora < t1->hora)
    {
        return -1;
    }

    if (t1->minuto < t2->minuto)
    {
        return 1;
    }
    else if (t2->minuto < t1->minuto)
    {
        return -1;
    }

    if (t1->segundo < t2->segundo)
    {
        return 1;
    }
    else if (t2->segundo < t1->segundo)
    {
        return -1;
    }

    return 0;
}

void imprime_tiempo(Tiempo *t)
{
    printf("%d/%d/%d %d:%d:%d", t->dia, t->mes, t->anio, t->hora, t->minuto, t->segundo);
}

void ordena_alfa(Archivo *list, int n)
{
    int resu;
    Archivo auxiliar;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            resu = strcmp(list[i].nombre, list[j].nombre);
            if (resu < 0 && i != j)
            {
                auxiliar = list[i];
                list[i] = list[j];
                list[j] = auxiliar;
            }
        }
    }
}

void ordena_temportal(Archivo *list, int n)
{
    int resu;
    Archivo auxiliar;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            resu = compara_tiempos(&list[i].ultima_mod, &list[j].ultima_mod);
            if (resu == -1 && i != j)
            {
                auxiliar = list[i];
                list[i] = list[j];
                list[j] = auxiliar;
            }
        }
    }
}

void imprimir_archivo(Archivo *list, int n)
{
    printf("Nombre: ");
    printf("%s,\t", list->nombre);
    printf("Ul mod.: ");
    imprime_tiempo(&list->ultima_mod);
    printf("\n");
}
