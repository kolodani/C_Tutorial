#include <stdio.h>

// Function declaration
int myFunction(int x, int y);

// The main method
int main()
{
    int result = myFunction(7, 2);  // call the function
    printf("Result is = %d", result);
    return 0;
}

// Function definition
int myFunction(int x, int y)
{
return x + y;
}