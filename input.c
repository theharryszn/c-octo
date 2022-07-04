#include<stdio.h>

int main(){
    printf("Welcome to GlobbyTv\n");

    char name[30];

    printf("Enter your name: ");

    scanf("%s", name);

    printf("Your name is %s\n", name);

    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    int c = a + b;

    printf("The sum of %d and %d is %d\n", a, b, c);
}