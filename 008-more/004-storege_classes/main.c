#include <stdio.h>

extern int shared; // Declared here, defined in another file

int main()
{
    printf("shared = %d\n", shared);
    return 0;
}
