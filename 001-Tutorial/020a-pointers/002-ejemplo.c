#include <stdio.h>

int main()
{
    int myAge = 43;     // An int variable
    int* ptr = &myAge;  // A pointer variable, with the name ptr, that stores the address of myAge

    // Output the value of myAge (43)
    printf("%d\n", myAge);

    // Outputs the memory address of myAge (0x7fff3839a18c)
    printf("%p\n", &myAge);

    // Outputs the memory address of myAge with a pointer (0x7fff3839a18c)
    printf("%p\n", ptr);

    return 0;
}
