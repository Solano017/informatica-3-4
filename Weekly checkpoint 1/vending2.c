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
//this is the new code for the vending 2, the only difference i saw were the printfs because the other codes are exactly the same.
// ill finish next class
printf("Item \t\t Price \t Quantity \t Code \n\n");

printf("Chips \t\t $%.2f \t %d \t\t %c \n", price1, quantity1, select1);

printf("Coke \t\t $%.2f \t %d \t\t %c \n", price2, quantity2, select2);

printf("ChatGPT \t $%.2f\t %d \t\t %c \n\n", price3, quantity3, select3);
}
