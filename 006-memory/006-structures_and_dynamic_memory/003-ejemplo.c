#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Car
{
    char brand[50];
    int year;
};

int main()
{
    int count = 2;
    struct Car *cars = (struct Car*) malloc(count * sizeof(struct Car));

    if (cars == NULL)
    {
        printf("Memory allocarion failed.\n");
        return 1;
    }

    // Initialize first 2 cars
    strcpy(cars[0].brand, "Toyota");
    cars[0].year = 2010;

    strcpy(cars[1].brand, "Audi");
    cars[1].year = 2019;

    // Need one more car -> gtow to 3
    int newCount = 3;
    struct Car *tmp = (struct Car*) realloc(cars, newCount * sizeof(struct Car));
    if (tmp == NULL)
    {
        // 'cars' is still valid here; free it to avoid a leak
        free(cars);
        printf("reallocation failed.\n");
        return 1;
    }
    cars = tmp; // use the reallocated block

    // Initialize the new element to index 2
    strcpy(cars[2].brand, "Kia");
    cars[2].year = 2022;

    // Print all cars
    for (int i = 0; i < newCount; i++)
    {
        printf("%s - %d\n", cars[i].brand, cars[i].year);
    }

    free(cars);

    return 0;
}
