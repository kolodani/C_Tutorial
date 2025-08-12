#include <stdio.h>

void calculateSum(){
    int x = 5;
    int y = 10;
    int sum = x + y;
    printf("The sum of x + y is: %d\n", sum);
}

int main()
{
    calculateSum();  // call the function
    return 0;
}

// Outputs The sum of x + y is: 15