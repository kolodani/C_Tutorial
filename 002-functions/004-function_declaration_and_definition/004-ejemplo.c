#include <stdio.h>

int myFunction(int x, int y)
{
    return x + y;
}

int main()
{
    int result = myFunction(7, 2);
    printf("Result is = %d", result);
    return 0;
}
// Outputs 9 (7 + 2)