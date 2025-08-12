#include <stdio.h>

int myFunction(int x){
    return 5 + x;
}

int main()
{
    printf("Result is: %d\n", myFunction(3));
    return 0;
}

// Outputs Result is: 8 (5 + 3)