#include <stdio.h>

// Create a structure called myStructure
struct myStructure
{
    int myNum;
    char myLetter;
};

int main()
{
    // Create different struct variables
    struct myStructure s1;
    struct myStructure s2;

    // Assign values to different struct variables
    s1.myNum = 13;
    s1.myLetter = 'B';

    s2.myNum = 20;
    s2.myLetter = 'C';

    return 0;
}
