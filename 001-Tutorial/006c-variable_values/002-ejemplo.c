#include <stdio.h>

int main()
{
    int myNum = 15;
    int myOtherNum = 23;

    // Assing the value of myOtherNum (23) to myNum
    myNum = myOtherNum;

    // myNum is now 23, instead of 15
    printf("%d", myNum);

    return 0;
}
