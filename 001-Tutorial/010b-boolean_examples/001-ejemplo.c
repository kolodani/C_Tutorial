#include <stdio.h>
#include <stdbool.h>

int main()
{
    int myAge = 25;
    int votingAge = 18;

    printf("%d\n", myAge >= votingAge);  // Returns 1 (true), meaning 25 year olds are allowed to vote!
    return 0;
}
