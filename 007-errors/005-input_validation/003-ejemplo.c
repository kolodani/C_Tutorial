#include <stdio.h>

int main()
{
    int number;      // Variable to store the user's number
    char input[100]; // Buffer to hold user input as a string

    printf("Enter a number: ");

    // Keep reading input until the user enters a valid integer
    while (fgets(input, sizeof(input), stdin))
    {
        // Try to read an interger from the input string
        if (sscanf(input, "%d", &number) == 1)
        {
            break; // Success: break out of the loop
        }
        else
        {
            printf("Invalid input. Try again: "); // If not an integer, ask again
        }
    }

    // Print the valid number enteredd by the user
    printf("You entered: %d\n", number);

    return 0;
}
