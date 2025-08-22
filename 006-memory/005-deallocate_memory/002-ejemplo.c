#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = malloc(sizeof(*ptr));

    free(ptr);
    ptr = NULL;

    return 0;
}
