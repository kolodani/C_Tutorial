#include <stdio.h>

int main()
{
    // Set the maximum possible score in the game to 500
    int maxScore = 500;

    // The actual score of the user
    int userScore = 423;

    /* Calculate the percentage of the user's score in relation to the maximum avalable score.
    Convert userScore to float to make sure the division is accurate */
    float percentage = (float) userScore / maxScore * 100.0;

    // Print the percentage
    printf("User's percentage is %.2f", percentage);

    return 0;
}
