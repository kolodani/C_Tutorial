#include <stdio.h>

// Define a struct
struct Car
{
    char brand[20];
    int year;
};

// Function that takes a ponter to a Car  struct and updates the year
void updateYear(struct Car *c)
{
    c->year = 2025; // Change the year
}

int main()
{
    struct Car myCar = {"Toyota", 2020};

    // Pass a pointer so the function can change the year
    updateYear(&myCar);

    // Access members using the -> operator
    printf("Brand: %s\n", myCar.brand);
    printf("Year: %d\n", myCar.year);

    return 0;
}
