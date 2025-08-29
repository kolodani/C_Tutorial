#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f = fopen("nothing.txt", "r");

    if (f == NULL)
    {
        printf("Failed to open file.\n");
        exit(1);
    }

    fclose(f);
    return 0;
}
