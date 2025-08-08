#include <stdio.h>

int main()
{
    char grettings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
    char grettings2[] = "Hello World!";

    printf("%zu\n", sizeof(grettings));   // Outputs 13
    printf("%zu\n", sizeof(grettings2));  // Outputs 13

    return 0;
}
