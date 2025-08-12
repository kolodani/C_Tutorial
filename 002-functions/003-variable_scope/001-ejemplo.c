#include <stdio.h>

void myFunction(){
    // Local variable that belongs to myFunction
    int x = 5;

    // Print the variable x
    printf("%d", x);
}

int main()
{
    myFunction();
    return 0;
}
