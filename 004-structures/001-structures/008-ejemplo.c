#include <stdio.h>
#include <string.h>

struct myStructure
{
    int myNum;
    char myLetter;
    char myString[30];
};

int main()
{
    struct myStructure s1 = {13, 'B', "Some text"};
    struct myStructure s2;

    s2 = s1;

    return 0;
}
