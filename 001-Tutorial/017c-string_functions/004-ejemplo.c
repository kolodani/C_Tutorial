#include <stdio.h>
#include <string.h>

int main()
{
    char alphabet[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%zu\n", strlen(alphabet));  // 26
    printf("%zu\n", sizeof(alphabet));  // 50

    return 0;
}
