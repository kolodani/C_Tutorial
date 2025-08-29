#include <stdio.h>
#include <errno.h>
#include <string.h>

int main()
{
    FILE *f = fopen("nothing.txt", "r");

    if (f == NULL)
    {
        perror("Error opening file");
        return 1;
    }

    fclose(f);
    return 0;
}
