#include <stdio.h>
#include <stdlib.h>

struct Item
{
    int id;
    char name[30];
    int qty;
    int price;
};

int main()
{
    FILE *fp;
    struct Item *p;
    int n = 5, i;
    int choice, id, qty;
    int bill = 0;

    p = (struct Item *)malloc(n * sizeof(struct Item));

    fp = fopen("stock.dat", "rb");

    if (fp == NULL)
    {
        p[0].id = 101;
        strcpy(p[0].name, "Kurkure");
        p[0].qty = 10;
        p[0].price = 100;

        p[1].id = 102;
        strcpy(p[1].name, "Dettol");
        p[1].qty = 6;
        p[1].price = 389;

        p[2].id = 103;
        strcpy(p[2].name, "Oats");
        p[2].qty = 10;
        p[2].price = 334;

        p[3].id = 104;
        strcpy(p[3].name, "Safola Oil");
        p[3].qty = 45;
        p[3].price = 56;

        p[4].id = 105;
        strcpy(p[4].name, "Bournvita");
        p[4].qty = 67;
        p[4].price = 77;

        fp = fopen("stock.dat", "wb");
        fwrite(p, sizeof(struct Item), n, fp);
        fclose(fp);
    }
    else
    {
        fread(p, sizeof(struct Item), n, fp);
        fclose(fp);
    }

    do
    {
        printf("\n1. View Stock");
        printf("\n2. Purchase");
        printf("\n3. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("\nID\tName\t\tQty\tPrice\n");
            for (i = 0; i < n; i++)
            {
                printf("%d\t%s\t\t%d\t%d\n",
                       p[i].id,
                       p[i].name,
                       p[i].qty,
                       p[i].price);
            }
        }
        else if (choice == 2)
        {
            printf("Enter Item ID: ");
            scanf("%d", &id);

            printf("Enter Quantity: ");
            scanf("%d", &qty);

            for (i = 0; i < n; i++)
            {
                if (id == p[i].id)
                {
                    if (qty <= p[i].qty)
                    {
                        bill = qty * p[i].price;
                        printf("Total Bill = %d\n", bill);

                        p[i].qty = p[i].qty - qty;

                        fp = fopen("stock.dat", "wb");
                        fwrite(p, sizeof(struct Item), n, fp);
                        fclose(fp);
                    }
                    else
                    {
                        printf("Stock not available.\n");
                    }
                }
            }
        }

    } while (choice != 3);

    free(p);

    printf("Thank You!\n");

    return 0;
}