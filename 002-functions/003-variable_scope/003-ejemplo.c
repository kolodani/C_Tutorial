#include <stdio.h>

// Global variable x
int x = 5;

void myFunction(){
    // We can use x here
    printf("%d\n", x);
}

int main()
{
    myFunction();

    // We can also use x here
    printf("%d\n", x);

    return 0;
}
