#include <stdio.h>
#include <time.h>

int main()
{
    time_t now = time(NULL);         // Get current time
    struct tm *t = localtime(&now);  // Convert to local time structure

    printf("Year: %d\n", t->tm_year + 1900);   // Add 1900 to get the actual year
    printf("Month: %d\n", t->tm_mon + 1);      // Months are numbered from 0 to 11, so add 1 to match real month numbers (1-12)
    printf("Day: %d\n", t->tm_mday);
    printf("Hour: %d\n", t->tm_hour);
    printf("Minute: %d\n", t->tm_min);
    printf("Second: %d\n", t->tm_sec);
    return 0;
}
