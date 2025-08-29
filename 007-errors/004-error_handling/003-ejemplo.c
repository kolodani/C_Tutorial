#include <stdio.h>
#include <errno.h>
#include <string.h>

int main()
{
    FILE *f = fopen("nothing.txt", "r");

    if (f == NULL)
    {
        printf("Error: %s\n", strerror(errno));
        return 1;
    }

    fclose(f);
    return 0;
}
