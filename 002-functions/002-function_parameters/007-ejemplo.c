#include <stdio.h>

int myFunction(int x, int y){
    return x + y;
}

int main()
{
    printf("Result is: %d\n", myFunction(5, 4));
    return 0;
}

// Outputs Result is: 9 (5 + 4)