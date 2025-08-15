#include <stdio.h>

int main()
{
    FILE *fptr;

    // Open a file in read mode
    fptr = fopen("filename.txt", "r");

    // Store the content of the file
    char myString[100];

    fgets(myString, 100, fptr);
    return 0;
}
