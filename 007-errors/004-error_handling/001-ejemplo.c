#include <stdio.h>

int main()
{
    FILE *fptr = fopen("nothing.txt", "r");

    if (fptr == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    fclose(fptr);
    return 0;
}
