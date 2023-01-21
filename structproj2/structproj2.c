#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct item {
    char* itemName;
    int quantity;
    float price;
    float amount;
};

void readItem (struct item *item1);

void printItem (struct item *item1);

int main ()
{
    struct item *shopping;
    shopping->itemName = (char*)calloc(50,sizeof(char));

    if (!shopping->itemName)
    {
        printf("Abort! Abort! Cannot allocate memory!\n");
        exit(-1);
    } else

    readItem(shopping);
    printItem(shopping);

    free(shopping->itemName);
    shopping->itemName = NULL;
    return 0;
}


void readItem (struct item *item1)
{
    char* temp;
    temp= (char*)calloc(50,sizeof(char));

    if (!temp)
    {
        printf("Abort! Abort! Cannot Allocate Memory!");
        exit(-1);
    } else

    printf("Input the name of the item you are about to purchase:");
    fgets(temp,50,stdin);
    temp[strcspn(temp,"\n")] = 0;
    strcpy(item1->itemName,temp);
    {
        fflush(stdin);
        free(temp);
        temp=NULL;
    }
    printf("Input the quantity of %s:",item1->itemName);
    scanf("%d",&item1->quantity);

    fflush(stdin);

    printf("Input the price of %s:",item1->itemName);
    scanf("%f",&item1->price);
    item1->amount = (item1->price)*(item1->quantity);
    return;
}

void printItem (struct item *item1)
{
    printf("\nItem Name:%s\nItem Quantity:%d\nItem Price:%.2f\n",item1->itemName,item1->quantity,item1->price);
    printf("The total is $%.2f\n",item1->amount);
    return;
}