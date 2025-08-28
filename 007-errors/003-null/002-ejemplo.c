#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *numbers = (int*) malloc(10000000000000000 * sizeof(int));

    if (numbers == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Memory allocation successful!\n");

    free(numbers);
    numbers = NULL;

    return 0;
}
