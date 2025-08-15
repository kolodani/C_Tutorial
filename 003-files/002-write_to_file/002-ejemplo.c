#include <stdio.h>

int main()
{
    FILE *fptr;

    // Open a file in writing mode
    fptr = fopen("filename.txt", "w");

    // Write some text to the file
    fprintf(fptr, "Hello World!");

    // Close the file
    fclose(fptr);

    return 0;
}
