#include <stdio.h>

int main()
{
    char fullName[30];

    printf("Type your full name: \n");
    fgets(fullName, sizeof(fullName), stdin);

    printf("Hello %s\n", fullName);

    // Type your full name: John Doe
    // Hello John

    return 0;
}
