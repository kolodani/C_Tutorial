#include <stdio.h>

int main()
{
    int myNumbers[4] = {25, 50, 75, 100};

    // Get the memory size of the myNumbers array
    printf("%zu", sizeof(myNumbers));

    return 0;
}
