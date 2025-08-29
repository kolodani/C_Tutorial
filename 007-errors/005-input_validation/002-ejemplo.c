#include <stdio.h>
#include <string.h>

int main()
{
    char name[100]; // Buffer to store the user's name

    do
    {
        printf("Enter your name: ");
        fgets(name, sizeof(name), stdin); // Read input as a string
        name[strcspn(name, "\n")] = 0;    // Remove the newline character if present
    } while (strlen(name) == 0); // Repeat if the input is empty

    printf("Hello, %s\n", name); // Greet the user
    return 0;
}
