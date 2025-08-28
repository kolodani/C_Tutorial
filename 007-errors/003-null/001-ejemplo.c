#include <stdio.h>

int main()
{
    FILE *fptr = fopen("nothing.txt", "r");

    if (fptr == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    fclose(fptr);
    return 0;
}
