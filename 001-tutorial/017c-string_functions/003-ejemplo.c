#include <stdio.h>
#include <string.h>

int main()
{
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%zu\n", strlen(alphabet));  // 26
    printf("%zu\n", sizeof(alphabet));  // 27

    return 0;
}
