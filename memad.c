#include<stdio.h>

int main() {

    // Creating a variable
    int age = 20;
    // Creating a pointer to variable age
    int *agePtr = &age;

    // Creating a variable
    char gender = 'f';
    // Creating a pointer to variable gender
    char *genderPtr = &gender;

    // Printing the memory address of age
    printf("%p\n", agePtr);
    // Printing the memory address of gender
    printf("%p\n", genderPtr);
    // Printing the value of gender
    printf("%c\n", *genderPtr);

    return 0;
}