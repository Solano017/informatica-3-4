#include <stdio.h>

int main(void)
{
float length, width;
float area, perimeter;

printf("Enter length: ");
scanf("%f", &length);

printf("Enter width: ");
scanf("%f", &width);

area = length * width; //Formula area
perimeter = 2 * (length + width); //Formula Perimeter

printf("Area: %.0f\n", area);
printf("Perimeter: %.0f\n", perimeter);

}
