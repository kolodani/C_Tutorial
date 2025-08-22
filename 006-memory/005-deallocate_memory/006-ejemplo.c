#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* ptr;
    ptr = malloc(sizeof(*ptr));
    ptr = realloc(ptr, 2 * sizeof(*ptr));
    return 0;
}
