#include <stdio.h>

int main(void)
{
    char item[50];
    float quantity;
    float price;
    float total;

    printf("Enter item: ");
    scanf("%s", item);

    printf("Enter price: ");
    scanf("%f", &price);

    printf("Enter quantity: ");
    scanf("%f", &quantity);

    total = quantity * price;

    printf("\n");
    printf("*********************\n");
    printf("INFOSUPER\n");
    printf("*********************\n");
    printf("Item\t\tQuantity\tPrice\n");
    printf("%s\t\t%.0f\t\t%.2f\n", item, quantity, price);
    printf("----------------------------------\n");
    printf("Total:\t\t\t\t%.2f\n", total);
    printf("----------------------------------\n");

}
