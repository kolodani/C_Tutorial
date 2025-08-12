#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool isHamburgerTasty = true;
    bool isPizzaTasty = true;

    // Find out if both hamburger and pizza is tasty
    printf("%d", isHamburgerTasty == isPizzaTasty);

    return 0;
}
