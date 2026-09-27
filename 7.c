#include <stdio.h>

int main()
{
    int choice, quantity;
    int price, total;
    float reward;

    printf("Enter your choice of food:\n");
    printf("1. Veg - Rs.110\n");
    printf("2. Non-Veg - Rs.145\n");
    printf("3. Proper Diet - Rs.170\n");

    scanf("%d", &choice);

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    if (choice == 1)
    {
        price = 110;
        printf("Selected Veg\n");
    }
    else if (choice == 2)
    {
        price = 145;
        printf("Selected Non-Veg\n");
    }
    else if (choice == 3)
    {
        price = 170;
        printf("Selected Proper Diet\n");
    }
    else
    {
        printf("Invalid choice\n");
        return 0;
    }

    total = price * quantity;

    printf("Price per item: Rs.%d\n", price);
    printf("Total price: Rs.%d\n", total);

    if (quantity > 25)
    {
        reward = total * 0.05;
        printf("You earned a loyalty reward of 5%%: Rs.%.2f\n", reward);
    }

    return 0;
}