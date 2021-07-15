#include <stdio.h>

struct item
{
	char  itemName[30];
	int qty;
	float price;
	float amount;
};

/*readItem()- to read values of item and calculate total amount*/
void readItem(struct item *i)
{
	printf("Enter product name: ");
	gets(i->itemName);
	printf("Enter price:");
	scanf("%f",&i->price);
	printf("Enter quantity: ");
	scanf("%d",&i->qty);
	i->amount =(float)i->qty * i->price;
}

/*printItem() - to print values of item*/
void printItem(struct item *i)
{
	printf("\nName: %s",i->itemName);
	printf("\nPrice: %f",i->price);
	printf("\nQuantity: %d",i->qty);
	printf("\nTotal Amount: %f",i->amount);

}
int main()
{
	
	struct item itm;	
	struct item *pItem;	
	
	pItem = &itm;	
	readItem(pItem);
	printItem(pItem);
	
	
	return 0;
}

