#include <stdio.h>
#include <errno.h>

int main()
{
    FILE *f = fopen("nothing.txt", "r");

    if (f == NULL)
    {
        if (errno == ENOENT)
        {
            printf("The file was not found.\n");
        }
        else
        {
            printf("Some other file error occurred.\n");
        }
        return 1;
    }

    fclose(f);
    return 0;
}
