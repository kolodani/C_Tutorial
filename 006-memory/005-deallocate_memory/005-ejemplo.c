#include <stdio.h>
#include <stdlib.h>

void myFunction(){
    int *ptr;
    ptr = malloc(sizeof(*ptr));
}

int main()
{
    myFunction();
    printf("The function has ended");
    return 0;
}
