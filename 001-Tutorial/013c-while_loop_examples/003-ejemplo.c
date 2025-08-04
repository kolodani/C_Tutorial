#include <stdio.h>

int main()
{
    // A variable with some specific numbers
    int numbers = 12345;

    // A variable to store the reversed number
    int revNumbers = 0;

    // Reverse and reorder the numbers
    while (numbers)
    {
        // Get the las number of 'numbers' and add in to 'revNumber'
        revNumbers = revNumbers * 10 + numbers % 10;
        // Remove the las number of 'numbers'
        numbers /= 10;
    }

    return 0;
}
