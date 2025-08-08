#include <stdio.h>

int main()
{
    char greetings[] = "Hello World!";
    greetings[0] = 'J';
    printf("%s\n", greetings);
    // outputs Jello World! instead of Hello World!

    return 0;
}
