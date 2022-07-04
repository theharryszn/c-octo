#include<stdio.h>

// Definition
float add(float a, float b);
float sub(float a, float b);
float mult(float a, float b);
float div(float a, float b);
float square(float a);

// Entry Point
int main()
{
    printf("C-Based Calculator\n");

    printf("What do you want to calculate: \n");

    printf("1. Addition\t 2. Subtraction\t 3. Multiplication\t 4. Division\t 5. Square\n");

    int option;
    float a, b, result;

    printf("Choose your option (1-5): ");
    scanf("%d", &option);

    switch (option)
    {
        case 1:
            printf("Enter the value of a: ");
            scanf("%f", &a);

            printf("Enter the value of b: ");
            scanf("%f", &b);

            result = add(a, b);
            printf("The sum of a and b is %f\n", result);
            break;
        case 2:
            printf("Enter the value of a: ");
            scanf("%f", &a);

            printf("Enter the value of b: ");
            scanf("%f", &b);
            result = sub(a, b);
            printf("The sub of b from a is %f\n", result);
            break;
        case 3:
            printf("Enter the value of a: ");
            scanf("%f", &a);

            printf("Enter the value of b: ");
            scanf("%f", &b);
            result = mult(a, b);
            printf("The mult of a and b is %f\n", result);
            break;
        case 4:
            printf("Enter the value of a: ");
            scanf("%f", &a);

            printf("Enter the value of b: ");
            scanf("%f", &b);
            result = div(a, b);
            printf("The div of a by b is %f\n", result);
            break;
         case 5:
            printf("Enter the value of a: ");
            scanf("%f", &a);
            
            result = square(a);
            printf("The square of a is %f\n", result);
            break;
        default:
            break;
        }
    }

// Declaration of the functions
float add(float a, float b){
    return a + b;
}

float sub(float a, float b){
    return a - b;
}

float mult(float a, float b){
    return a * b;
}

float div(float a, float b){
    return a / b;
}

float square(float a){
    return a * a;
}