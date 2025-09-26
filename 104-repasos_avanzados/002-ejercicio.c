/*
    PRACTICA 1
    NIVEL 1
    EJERCICIO 02:
    ESTADISTICAS DE NOTAS
*/

#include <stdio.h>
#include <stdlib.h>

int verificador();
float **reservar_memoria(int, int);
float *reservar_arreglo(int);
void llenar_planilla(float **, int, int);
void promedios(float **, float *, float *, int, int);
void mostrar(float **, float *, float *, int, int);
void liberar_memoria(int **, int);
void liberar_arreglo(int *);

int main()
{
    int materias, alumnos;
    float **curricula, *alumnosProm, *materiasProm;
    printf("Estadisticas de Notas.\n");
    printf("Ingrese la cantidad de alumnos:\n");
    alumnos = verificador();
    printf("Ingrese la cantidad de materias:\n");
    materias = verificador();

    curricula = reservar_memoria(materias, alumnos);
    alumnosProm = reservar_arreglo(alumnos);
    materiasProm = reservar_arreglo(materias);

    printf("Ahora llenemos la planilla de datos:\n");
    llenar_planilla(curricula, materias, alumnos);
    promedios(curricula, materiasProm, alumnosProm, materias, alumnos);

    printf("Veamos como queda la planilla:\n");
    mostrar(curricula, materiasProm, alumnosProm, materias, alumnos);

    liberar_memoria(curricula, materias);
    liberar_arreglo(alumnosProm);
    liberar_arreglo(materiasProm);

    return 0;
}

int verificador()
{
    int valor;
    do
    {
        printf("> ");
        scanf("%d", &valor);
        if (valor <= 0)
        {
            printf("Ingrese un valor mayor a cero.\n");
        }
    } while (valor <= 0);
    return valor;
}

float **reservar_memoria(int materias, int alumnos)
{
    float **matriz = (float **)malloc(materias * sizeof(float *));
    for (int i = 0; i < materias; i++)
    {
        matriz[i] = (float *)malloc(alumnos * sizeof(float));
    }
    return matriz;
}

float *reservar_arreglo(int a)
{
    float *arreglo = (float *)calloc(a, sizeof(float));
    return arreglo;
}

void llenar_planilla(float **arr, int materias, int alumnos)
{
    for (int i = 0; i < materias; i++)
    {
        printf("Ingreso de datos de la materia %d:\n", i + 1);
        for (int j = 0; j < alumnos; j++)
        {
            printf("Nota del alumno %d: ", j + 1);
            scanf("%f", &arr[i][j]);
        }
    }
}

void promedios(float **arr, float *promM, float *promA, int mate, int alum)
{
    for (int i = 0; i < mate; i++)
    {
        for (int j = 0; j < alum; j++)
        {
            promM[i] = promM[i] + arr[i][j];
            promA[j] = promA[j] + arr[i][j];
        }
        promM[i] = promM[i] / alum;
    }
    for (int i = 0; i < alum; i++)
    {
        promA[i] = promA[i] / mate;
    }
}

void mostrar(float **arr, float *promM, float *promA, int mate, int alum)
{
    for (int i = 0; i < mate; i++)
    {
        for (int j = 0; j < alum; j++)
        {
            printf("%.2f ", arr[i][j]);
        }
        printf("\t%.2f\n", promM[i]);
    }
    printf("\n");
    for (int i = 0; i < alum; i++)
    {
        printf("%.2f ", promA[i]);
    }
}

void liberar_memoria(int **arr, int t)
{
    for (int i = 0; i < t; i++)
    {
        free(arr[i]);
    }
    free(arr);
    arr = NULL;
}

void liberar_arreglo(int *arr)
{
    free(arr);
    arr = NULL;
}
