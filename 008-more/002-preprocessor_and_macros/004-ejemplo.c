#include <stdio.h>

#define DEBUG

int main()
{
    #ifdef DEBUG
        printf("Debug mode in ON\n");
    #endif
    return 0;
}
