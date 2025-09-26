/*
    PRACTICA 1
    NIVEL 1
    EJERCICIO 05:
    DESCUBRIENDO PUNTEROS
*/

#include <stdio.h>

int main()
{
    int i = 8, *pi = &i;
    long long l = 8, *pl = &l;
    float f = 102.8f, *pf = &f;
    double d = 678.44, *pd = &d;
    int vec[100];
    vec[0] = 44;
    printf("Variable int, tam.bytes = %d\tdir.&i: %p \tvalor: %d\n", sizeof(i), &i, i);
    printf("Puntero int, tam.bytes = %d\tdir.&pi: %p \tvalor: %p\n", sizeof(pi), &pi, pi);
    printf("Variable long, tam.bytes = %d\tdir.&l: %p \tvalor: %ld\n", sizeof(l), &l, l);
    printf("Puntero long, tam.bytes = %d\tdir.&pl: %p \tvalor: %p\n", sizeof(pl), &pl, pl);
    printf("Variable float, tam.bytes = %d\tdir.&f: %p \tvalor: %1f\n", sizeof(f), &f, f);
    printf("Puntero float, tam.bytes = %d\tdir.&pf: %p \tvalor: %p\n", sizeof(pf), &pf, pf);
    printf("Variable double, tam.bytes = %d\tdir.&d: %p \tvalor: %2lf\n", sizeof(d), &d, d);
    printf("Puntero double, tam.bytes = %d\tdir.&pd: %p \tvalor: %p\n", sizeof(pd), &pd, pd);
    printf("Variable array, tam.bytes = %d\tdir.&vec[0]: %p \tvalor: %d\n", sizeof(vec[0]), &vec[0], vec[0]);
    printf("Puntero array, tam.bytes = %d\tdir.&vec[0]: %p \tvalor: %p\n", sizeof(vec), &vec, vec);
    return 0;
}
