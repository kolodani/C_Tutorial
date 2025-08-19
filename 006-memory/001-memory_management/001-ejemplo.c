#include <stdio.h>

int main()
{
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    printf("%zu\n", sizeof(myInt));      // 4 bytes
    printf("%zu\n", sizeof(myFloat));    // 4 bytes
    printf("%zu\n", sizeof(myDouble));   // 8 bytes
    printf("%zu\n", sizeof(myChar));     // 1 bytes

    return 0;
}
