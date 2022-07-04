#include<stdio.h>

int main(){

    float a = 30, b = 20, c;

    printf("Choose an option\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");

    int option = 2;

    switch(option) {
        case 1:
            // Addition
            c = a + b;
            break;
        case 2:
            // Sub
            c = a - b;
            break;
        default:
            // Invalid
            printf("Choose a valid option");
            break;
            return 0;
    }

    printf("The result is %f", c);

    return 0;
}