#include<stdio.h>

// Declaring the functions
void sayName();
int add(int a, int b);
void sayGender(char gender);

int main() {
    sayName();
    int sum = add(20, 40);

    printf("%d\n", sum);
    sayGender('f');
    return 0;
}

// as no parameters
void sayName() {
    printf("My name is Harry\n");
    sayGender('m');
}

// returns int, takes two parameters
int add(int a, int b){
    return a + b;
}
// returns nothing, takes one parameter
void sayGender(char gender) {
    printf("Your gender is %c\n", gender);
}
