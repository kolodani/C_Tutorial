#include <stdio.h>

void myFunction(char name[]){
    printf("Hello %s\n", name);
}

int main()
{
    myFunction("Liam");
    myFunction("Jenny");
    myFunction("Anja");
    return 0;
}

// Hello Liam
// Hello Jenny
// Hello Anja