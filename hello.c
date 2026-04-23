#include <stdio.h>

int main(void)
{
char name[50]; // Variable to store the user's name

printf("Enter your name: "); // Ask the user for their name
scanf("%s", name); // Save the name entered by the user
printf("Hello, %s!\n", name); // Print Hello + the user's name
}
// End of the program
