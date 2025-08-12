#include <stdio.h>

// Create a Function
void myFunction(){
    printf("I just got executed!\n");
}

int main()
{
    myFunction();
    myFunction();
    myFunction();
    return 0;
}

// "I just got executed!"
// "I just got executed!"
// "I just got executed!"