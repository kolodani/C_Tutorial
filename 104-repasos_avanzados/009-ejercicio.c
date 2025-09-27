/*
    PRACTICA 1
    NIVEL 1
    EJERCICIO 09:
    CADENA DE CARACTERES
*/

#include <stdio.h>
#include <stdlib.h>

typedef enum
{
    MAYUSCULAS,
    MINUSCULAS
} may_min;

int strLargo(const char *origen); // Cantidad de caracteres

int strVacio(const char *origen); // retorna 1 si tiene la menos un caracter, 0 en otro caso

void strCopia(char *destino, const char *origen); // Copiador

char *reverse(char *string); // retorna una cadena que es string invertida

void strIzq(char *destino, const char *origen); // Saca blanco izq

void strDer(char *destino, const char *origen); // saca blancos der

void strAmbos(char *destino, const char *origen); // saca blancos izq y der

void strMayMin(char *destino, const char *origen, may_min m); // Convierte may min

int main()
{
    char *text1 = " Sera Cierto ?? ";
    int largo = strLargo(text1) + 1;
    char *result = (char *)malloc(largo);
    char *reves;
    if (result == NULL)
    {
        result - 1; // sino pudo reservar memoria para result
    }
    printf("La cadena: ");
    puts(text1);
    printf("Se encuentra: %s\n", (strVacio(text1) ? "No vacia" : "Vacia"));
    printf("Largo : %d\n", strLargo(text1));
    strCopia(result, text1);
    printf("Copia : [%s]\n", result);
    strIzq(result, text1);
    printf("Sin blanco a la Izq: [%s]\n", result);
    strDer(result, text1);
    printf("Der : [%s]\n", result);
    strAmbos(result, text1);
    printf("Ambos: [%s], sin blancos al principio ni al final.\n", result);
    strMayMin(result, text1, MAYUSCULAS);
    printf("Mayusculas : [%s]\n", result);
    strMayMin(result, text1, MINUSCULAS);
    printf("Minusculas : [%s]\n", result);
    reves = reverse(text1);
    printf("La cadena: %s invertida queda: %s\n", text1, reves);

    return 0;
}

int strLargo(const char *origen)
{
    int i = 0;
    while (origen[i] != '\0')
    {
        i++;
    }
    return i;
}

int strVacio(const char *origen)
{
    int i = 1;
    if (origen[i] == '\0')
    {
        i = 0;
    }
    return i;
}

void strCopia(char *destino, const char *origen)
{
    int i = 0;
    while (origen[i] != '\0')
    {
        destino[i] = origen[i];
        i++;
    }
    destino[i] = '\0';
}

char *reverse(char *string)
{
    int i = 0;
    int j = strLargo(string) - 1;
    char *reversed = (char *)malloc(strLargo(string) + 1);
    while (i < strLargo(string))
    {
        reversed[i] = string[j];
        i++;
        j--;
    }
    reversed[i] = '\0';
    return reversed;
}

void strIzq(char *destino, const char *origen)
{
    int i = 0, j = 0;
    while (origen[i] == ' ')
    {
        i++;
    }
    while (origen[i] != '\0')
    {
        destino[j] = origen[i];
        i++;
        j++;
    }
    destino[j]= '\0';
}

void strDer(char *destino, const char *origen)
{
    int i = 0, j = 0;
    while (origen[i] != '\0')
    {
        i++;
    }
    i--;
    while (origen[i] == ' ')
    {
        i--;
    }
    while (j <= i)
    {
        destino[j] = origen[j];
        j++;
    }
    destino[j] = '\0';
}

void strAmbos(char *destino, const char *origen)
{
    int i = 0, j = 0;
    while (origen[i] == ' ')
    {
        i++;
    }
    while (origen[i] != '\0')
    {
        destino[j] = origen[i];
        i++;
        j++;
    }
    i--;
    while (destino[i] != ' ')
    {
        i--;
    }
    destino[i] = '\0';
}

void strMayMin(char *destino, const char *origen, may_min m)
{
    int i = 0;
    while (origen[i] != '\0')
    {
        if (m == MAYUSCULAS)
        {
            if (origen[i] >= 'a' && origen[i] <= 'z')
            {
                destino[i] = origen[i] - 32;
            }
            else
            {
                destino[i] = origen[i];
            }
        }
        else
        {
            if (origen[i] >= 'A' && origen[i] <= 'Z')
            {
                destino[i] = origen[i] + 32;
            }
            else
            {
                destino[i] = origen[i];
            }
        }
        i++;
    }
    destino[i] = '\0';
}