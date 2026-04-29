#include <stdio.h>

int main(void)
{
float item;
float quantity;
float price;

float total;

printf("Enter item: ");
scanf("%f", &item);

printf("Enter price: ");
scanf("%f", &price);

printf("Enter quantity: ");
scanf("%f", &quantity);

total = quantity * price;

printf("\n");
//This will be the receipt
printf("*********************\n");
printf("INFOSUPER\n");
printf("*********************\n");
printf("Item \t Quantity \t Price\n");
printf("%.0f \t", item);
printf(" %.0f \t\t", quantity);
printf(" %.0f \t\n", price);
printf("----------------------------------\n");
printf("total: \t\t\t\t");
printf(" %.0f \t\n", total);
printf("----------------------------------\n");
}
