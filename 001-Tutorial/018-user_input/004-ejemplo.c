#include <stdio.h>

int main()
{
    char fullName[30];

    printf("Type your full name: \n");
    scanf("%s", fullName);

    printf("Hello %s\n", fullName);

    // Type your full name: John Doe
    // Hello John

    return 0;
}
