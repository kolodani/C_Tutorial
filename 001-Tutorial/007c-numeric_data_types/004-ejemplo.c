#include <stdio.h>

int main()
{
    float f1 = 35e3;     // 35 * 10^3 = 35000
    double d1 = 12E4;    // 12 * 10^4 = 120000

    printf("%f\n", f1);
    printf("%lf", d1);

    return 0;
}
