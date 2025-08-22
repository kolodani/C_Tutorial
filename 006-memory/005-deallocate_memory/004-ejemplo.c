#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 5;
    int *ptr;
    ptr = calloc(2, sizeof(*ptr));
    ptr = &x;
    return 0;
}
