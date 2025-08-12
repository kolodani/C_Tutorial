#include <stdio.h>

int main()
{
    int myNumbers[4] = {25, 50, 75, 100};

    // Get the value of the second element in myNumbers
    printf("%d\n", *(myNumbers + 1));

    // Get the value of the third element in myNumbers
    printf("%d\n", *(myNumbers + 2));

    // and so on..

    return 0;
}
