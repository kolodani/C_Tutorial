#include <stdio.h>

int main()
{
    int numbers[3] = {10, 20 ,30};
    int index = 5;

    printf("Index = %d\n", index);

    if (index >= 0 && index < 3) // Make  sure the index is within the valid range (0 to 2)
    {
        printf("Value = %d\n", numbers[index]);
    }
    else
    {
        printf("Error: Index out of bounds!\n");
    }

    return 0;
}
