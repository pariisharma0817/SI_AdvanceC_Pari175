#include <stdio.h>

struct Item
{
    int id;
    int qty;
    int price;
    int discount;
};

int main()
{
    printf("=======================D-MART INVOICE=======================\n");

    struct Item p[5] = {
        {101,10,100,2},
        {102,6,389,4},
        {103,100,334,6},
        {104,45,56,8},
        {105,67,77,10}
    };

    int choice, i;
    int Item_id = 0, Qty = 0;
    int bill = 0;

    printf("1> View Inventory Stock\n");
    printf("2> Purchase Items\n");
    printf("3> Check Previous Purchases\n");
    printf("4> Exit\n");

    printf("\nEnter Choice: ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        printf("\n*********** INVENTORY STOCK ***********\n");
        printf("ID\tQTY\tPRICE\tDISCOUNT\n");

        for(i=0; i<5; i++)
        {
            printf("%d\t%d\t%d\t%d\n",
                   p[i].id,
                   p[i].qty,
                   p[i].price,
                   p[i].discount);
        }
    }

    else if(choice == 2)
    {
        printf("Enter Item ID: ");
        scanf("%d", &Item_id);

        printf("Enter Quantity: ");
        scanf("%d", &Qty);

        for(i=0; i<5; i++)
        {
            if(Item_id == p[i].id)
            {
                if(Qty <= p[i].qty)
                {
                    bill = Qty * p[i].price;

                    printf("\nITEM FOUND!!");
                    printf("\nPrice = %d", p[i].price);
                    printf("\nBill = %d", bill);

                    p[i].qty = p[i].qty - Qty;
                }
                else
                {
                    printf("Not enough stock available!!\n");
                    printf("Available stock = %d\n", p[i].qty);
                }
            }
        }
    }

    else if(choice == 3)
    {
        printf("\n----- PREVIOUS PURCHASES -----\n");
        printf("Item ID : %d", Item_id);
        printf("\nQuantity : %d", Qty);
        printf("\nTotal Bill : %d", bill);
        printf("\n------------------------------\n");
    }

    else if(choice == 4)
    {
        printf("\n================================");
        printf("\nThank You For Shopping At D-MART");
        printf("\nPlease Visit Again!");
        printf("\nHave A Nice Day!");
        printf("\n================================");
    }

    else
    {
        printf("Invalid Choice!!!!!");
    }

    return 0;
}