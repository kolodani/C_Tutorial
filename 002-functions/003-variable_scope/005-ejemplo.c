#include <stdio.h>

// Global variable x
int x = 5;

void myFunction(){
    printf("%d\n", ++x); // Increment the value of x by 1 and print it
}

int main()
{
    myFunction();

    printf("%d\n", x); // Print the global variable x
    return 0;
}

// The value of x is now 6 (no longer 5)