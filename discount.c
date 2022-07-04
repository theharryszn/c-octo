#include<stdio.h>

int main(){
    printf("How many items do you want to purchase: ");
    int noOfItems;
    scanf("%d", &noOfItems);

    float prices[noOfItems];
    float highest = 0;
    float temp;

    for (int i = 0; i < noOfItems; i++)
    {
        printf("Enter price %d: ", i);
        float price;
        scanf("%f", &price);
        prices[i] = price;
        temp = price;

        if(temp > highest) {
            highest = temp;
        }
    }

    printf("The highest price is %f.\n", highest);

    float discount = highest * 15 / 100;

    float newPrice = highest - discount;

    printf("You got a 15 percent discount on the highest price.\n");
    printf("The new price is %f.\n", newPrice);
}