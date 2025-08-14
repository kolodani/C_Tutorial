#include <stdio.h>

int main()
{
    FILE *fptr;

    // Create a file
    fptr = fopen("/home/kolodani/Documents/Repositorios/Cursos/C_Tutorial/003-files/001-files/filename.txt", "w");

    // Close the file
    fclose(fptr);

    return 0;
}
