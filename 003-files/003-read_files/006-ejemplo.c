#include <stdio.h>

int main()
{
    FILE *fptr;

    // Open a file in read mode
    fptr = fopen("loremipsum.txt", "r");

    if (fptr == NULL)
    {
        printf("Not able to open the file.");
    }

    // Close the file
    // fclose(fptr);

    return 0;
}