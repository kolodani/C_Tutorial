#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Hello";
    char str2[] = "Hello";
    char str3[] = "Hi";


    // Compare str1 and str2, and print the result
    printf("%d\n", strcmp(str1, str2)); // returns 0 (the strings are equal)

    // Compare str1 and str3, and print the result
    printf("%d\n", strcmp(str1, str3)); // returns -4 (the strings are not equal)

    return 0;
}
