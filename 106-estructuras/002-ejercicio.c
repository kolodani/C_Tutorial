/*
    PRACTICA ESTRUCTURA
    ESTRUCTURA
    EJERCICIO 02:
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
    int n;
    double *coeficiente;
} Polinomio;

Polinomio *creaPolinomio(int);
void setCoef(int, double, Polinomio *);
double getCoef(int, Polinomio *);
double especializa(double, Polinomio *);
Polinomio *sum(Polinomio *, Polinomio *);
Polinomio *mult(Polinomio *, Polinomio *);
Polinomio *deriv(Polinomio *);
void destruyePolinomio(Polinomio *);
double ceropol(Polinomio *, double , double , double);

int main()
{
    Polinomio *P1 = creaPolinomio(2);
    Polinomio *P2 = creaPolinomio(2);
    setCoef(0, 2, P1);
    setCoef(1, 4, P1);
    setCoef(2, 8, P1);
    setCoef(0, 1, P2);
    setCoef(1, 2, P2);
    setCoef(2, 3, P2);
    printf("P1(x) = %.2f + %.2f x + %.2f x^2\n", P1->coeficiente[0], P1->coeficiente[1], P1->coeficiente[2]);
    printf("P2(x) = %.2f + %.2f x + %.2f x^2\n", P2->coeficiente[0], P2->coeficiente[1], P2->coeficiente[2]);
    printf("El valor del coeficiente de grado 1 es: %.2f\n", getCoef(1, P1));
    printf("El valor de P1(2) es: %.2f\n", especializa(2, P1));
    Polinomio *P3 = sum(P1, P2);
    printf("P3(x) = %.2f + %.2f x + %.2f x^2\n", P3->coeficiente[0], P3->coeficiente[1], P3->coeficiente[2]);
    Polinomio *P4 = mult(P1, P2);
    printf("P4(x) = %.2f + %.2f x + %.2f x^2 + %.2f x^3 + %.2f x^4\n", P4->coeficiente[0], P4->coeficiente[1], P4->coeficiente[2], P4->coeficiente[3], P4->coeficiente[4]);
    Polinomio *P5 = deriv(P1);
    printf("P5(x) = %.2f + %.2f x\n", P5->coeficiente[0], P5->coeficiente[1]);
    destruyePolinomio(P1);
    int cero = ceropol(P2, 0, 1, 0.0001);
    printf("El cero de P2(x) es: %d\n", cero);
    return 0;
}

// a.
// crea y retorna un nuevo Polinomio
Polinomio *creaPolinomio(int orden)
{
    Polinomio *poli;
    poli = (Polinomio *)malloc(sizeof(Polinomio));
    poli->n = orden;
    poli->coeficiente = (double *)malloc((orden + 1) * sizeof(double));
    return poli;
}

// b.
//  asigna el n_ésimo coeficiente del Polinomio
void setCoef(int n, double c, Polinomio *P)
{
    P->coeficiente[n] = c;
}

// c.
// retorna el n_ésimo coeficiente del Polinomio
double getCoef(int n, Polinomio *P)
{
    double retorno;
    retorno = P->coeficiente[n];
    return retorno;
}

// d.
// calcula el polinomio en x usando:
// ((...((c[n] * x + c[n - 1]) * x + c[n - 2]) * x + ... + c[1] * x) + c[0])
double especializa(double x, Polinomio *P)
{
    double resultado = 0;
    double potencia = 1;
    for (int i = 0; i <= P->n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            potencia *= x;
        }
        resultado += P->coeficiente[i] * potencia;
        potencia = 1;
    }
    return resultado;
}

// e.
// suma dos Polinomios retorna un nuevo Polinomio con el resultado
Polinomio *sum(Polinomio *p1, Polinomio *p2)
{
    int orden = p1->n > p2->n ? p1->n : p2->n;
    Polinomio *resultado = creaPolinomio(orden);
    for (int i = 0; i <= orden; i++)
    {
        resultado->coeficiente[i] = getCoef(i, p1) + getCoef(i, p2);
    }
    return resultado;
}

// f.
// multiplica dos Polinomios y retorna un nuevo Polinomio con el resultado
Polinomio *mult(Polinomio *p1, Polinomio *p2)
{
    int orden = p1->n + p2->n;
    Polinomio *resultado = creaPolinomio(orden);
    for (int i = 0; i <= p1->n; i++)
    {
        for (int j = 0; j <= p2->n; j++)
        {
            resultado->coeficiente[i + j] += p1->coeficiente[i] * p2->coeficiente[j];
        }
    }
    return resultado;
}

// g.
// deriva un Polinomio retornando un nuevo Polinomio con el resultado
Polinomio *deriv(Polinomio *p)
{
    Polinomio *resultado = creaPolinomio(p->n - 1);
    for (int i = 0; i < p->n; i++)
    {
        resultado->coeficiente[i] = p->coeficiente[i + 1] * (i + 1);
    }
    return resultado;
}

// h.
// libera la memoria asociada con el polinomio
void destruyePolinomio(Polinomio *p)
{
    free(p->coeficiente);
    free(p);
}

// i.
// busque por el método de bisección un cero de un polinomio dentro de un
// intervalo [a,b], con una precisión dada por épsilon y lo retorne
double ceropol(Polinomio *p, double a, double b, double epsilon)
{
    double c = (a + b) / 2;
    double fa = especializa(a, p);
    double fb = especializa(b, p);
    double fc = especializa(c, p);
    if (fabs(fc) < epsilon)
    {
        return c;
    }
    if (fa * fc < 0)
    {
        return ceropol(p, a, c, epsilon);
    }
    if (fb * fc < 0)
    {
        return ceropol(p, c, b, epsilon);
    }
    return 0;
}

