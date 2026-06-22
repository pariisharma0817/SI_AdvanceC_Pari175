/**Generate an invoice of different outlets and which include entities's id ,product quantity,product mrp,product discound,product features note this online invoice system provides the feature to represent the whole stock also provide the functionality to add a single or more items
 once the requirement is done user can generate the ereciept by own itself each item and their other properties will be stored in arrays of same size and with the help of loops we can take*/

#include <stdio.h>

int main()
{   printf("==================D-MART INVOICE==================\n");
    int choice,i,Item_id=0,Qty=0;
	int bill=0;
    int ID[5]={101,102,103,104,105};
	int QTY[5]={10,6,100,45,67};
	int Price[5]={100,389,334,56,77};
	int Discount[5]={2,4,6,8,10};
    printf("1> View Inventory Stock:\n");
    printf("2> Purchase Items:\n");
    printf("3> Check previous purchases:\n");
	printf("4> Exit..");
    printf("\nEnter choice:");
    scanf("%d", &choice);
    if(choice == 1)
    {  printf("\n*****INVENTORY STOCK*****\n");
		
        printf("ID\tQTY\tPRICE\tDISCOUNT\n");

    for(i=0;i<5;i++)
    {
        printf("%d\t%d\t%d\t%d\n",ID[i],QTY[i],Price[i],Discount[i]);
    }
    }
    else if(choice == 2)
    {
        printf("Select Items To Purchase:\n");
		printf("ENTER ITEM ID:\n");
        scanf("%d",&Item_id);
		printf("ENTER QTY:");
		scanf("%d",&Qty);
		for(i=0;i<5;i++)
		{ if(Item_id==ID[i])
			{ bill=Qty*Price[i];
				printf("ITEM FOUND??");
				printf("\nPrice= %d",Price[i]);
				printf("\nBill=%d",bill);
				QTY[i]=QTY[i]-Qty;
		     }
	     }
		
		
	 }   
    else if(choice == 3)
    {   
	printf("-----Opening Previous purchases:-----\n");	
    printf("\n----- PREVIOUS PURCHASES -----\n");
    printf("Item ID : %d", Item_id);
    printf("\nQuantity : %d", Qty);
    printf("\nTotal Bill : %d", bill);
    printf("\n------------------------------\n");
    }    
    else if (choice == 4)
    {
    printf("\n================================");
    printf("\nThank You For Shopping At D-MART");
    printf("\nPlease Visit Again!");
    printf("\nHave A Nice Day!");
    printf("\n================================");
    }
     else
    {
        printf("Invalid Choice!!!!!\n");
    }
    return 0;
}
	
