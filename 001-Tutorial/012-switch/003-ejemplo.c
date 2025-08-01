#include <stdio.h>

int main()
{
    int day = 4;

    switch (day)
    {
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    default:
        printf("Looking forward to the Weekend");
    }
    // Outputs "Looking forward to the Weekend"

    return 0;
}
