#include <stdio.h>

int myFunction(int x, int y){
    return x + y;
}

int main()
{
    int result1 = myFunction(5, 3);
    int result2 = myFunction(8, 2);
    int result3 = myFunction(15, 15);

    printf("Result is: %d\n", result1);
    printf("Result is: %d\n", result2);
    printf("Result is: %d\n", result3);

    return 0;
}
