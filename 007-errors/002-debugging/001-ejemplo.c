#include <stdio.h>

int main()
{
    int x = 10;
    int y = 0;
    printf("Before division\n"); // Debug output
    int z = x / y; // Crashes (division by zero)
    printf("After division\n"); // Never runs
    return 0;
}
