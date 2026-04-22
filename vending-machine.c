#include <stdio.h>

int main(void)
{
    //This is the code we are going to use for the printf to find the values needed.
// Product 1 Chips fuego
float price1 = 1.50;
int quantity1 = 20;
char select1 = 'A';

// Product 2 Coke, THE ELIXIR NEEDED FOR LIFE duhhh
float price2 = 2.00;
int quantity2 = 50;
char select2 = 'B';

// Product 3 ChatGPT 1 month
float price3 = 5.99;
int quantity3 = 10;
char select3 = 'C';

//This is the code so the terminal is able to show me the vending machine.
printf("Vending Machine Stock\n");
printf("---------------------------\n");

printf("Item name: Chips\n");
printf("Price: $%.2f\n", price1); //%.2f formats the number to 2 decimal places
printf("Quantity available: %d\n", quantity1); //%d is used for whole numbers
printf("Selection code: %c\n\n", select1); //%c is used for a single character, like a letter or number in this case a letter.
// I used /n/n to leave a blank space without needing to putting another printf, this is called being lazy
printf("Item name: Coke\n");
printf("Price: $%.2f\n", price2);
printf("Quantity available: %d\n", quantity2);
printf("Selection code: %c\n\n", select2);

printf("Item name: ChatGPT 1 month\n");
printf("Price: $%.2f\n", price3);
printf("Quantity available: %d\n", quantity3);
printf("Selection code: %c\n", select3);

}
