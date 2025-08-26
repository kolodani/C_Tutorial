#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* ptr = malloc(sizeof(int));
    *ptr = 10;
    free(ptr);
    printf("%d\\n", *ptr); // Undefined behavior - accessing memory that was freed
    return 0;
}
