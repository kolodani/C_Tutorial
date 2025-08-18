#include <stdio.h>

union myUnion
{
    int myNum;
    char myLetter;
    char myString[36];
};

int main()
{
    union myUnion u1;
    printf("Size of union: %zu bytes\n", sizeof(u1));
    return 0;
}
