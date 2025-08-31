#include <stdio.h>
#include <time.h>

int main()
{
    time_t currentTime;
    time(&currentTime); // Get the current time

    printf("Current time: %s", ctime(&currentTime));
    return 0;
}
