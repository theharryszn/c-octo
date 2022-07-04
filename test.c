#include<stdio.h>

int main() {
    printf("USSD\n");

    printf("Choose Your Plan\n");
    printf("1. 300mb - N300.\n 2. 75mb - N100.\n 3. 1Gb - N200\n");

    int choice;

    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Successfully recharged 300mb - N300\n");
        break;
    case 2:
        printf("Successfully recharged 75mb - N100\n");
        break;
    case 3:
        printf("Successfully recharged 1Gb - N200\n");
        break;
    default:
        printf("Invalid Choice\n");
        break;
    }
}