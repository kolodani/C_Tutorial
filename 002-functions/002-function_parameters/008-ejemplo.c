#include <stdio.h>

int myFunction(int x, int y){
    return x + y;
}

int main()
{
    int result = myFunction(6, 4);
    printf("Result is: %d\n", result);
    return 0;
}

// Outputs Result is: 10 (6 + 4)