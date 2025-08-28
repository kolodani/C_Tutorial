#include <stdio.h>

int main()
{
    int x = 10;
    int y = 0;

    printf("Before division\n");

    if (y != 0) // Check that y is not zero before dividing
    {
        int z = x / y;
        printf("Result: %d\n", z);
    }
    else
    {
        printf("Error: Division by zero!\n"); // Print error message instead of crashing
    }

    printf("After division\n");
    return 0;
}
