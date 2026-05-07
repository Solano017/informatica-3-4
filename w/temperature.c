#include <stdio.h>

int main(void)
{
    float fahrenheit;
    float celsius;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) / 1.8;

    printf("%f°F = %f°C\n", fahrenheit, celsius);


}
