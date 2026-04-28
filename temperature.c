#include <stdio.h>

int main(void)
{
float fahrenheit;
float celsius;

printf("Enter fahrenheit: ");
scanf("%f", &fahrenheit);


celsius = (fahrenheit - 32) * 5 / 9; //formula celsius


printf("celsius: %.1f\n", celsius);


}
