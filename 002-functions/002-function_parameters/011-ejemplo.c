#include <stdio.h>

float toCelcius(float fahrenheit){
    return (5.0 / 9.0) * (fahrenheit - 32.0);
}

int main()
{
    // Set a fahrenheit value
    float f_value = 98.8;

    // Call the function with the fahrenheit value
    float result = toCelcius(f_value);

    // Print the fahrenheit value
    printf("Fahrenheit: %.2f\n", f_value);

    // Print the result
    printf("Convert Fahrenheit to Celcius: %.2f\n", result);

    return 0;
}
