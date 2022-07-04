#include<stdio.h>
#include<string.h>

struct Person
    {
        char name[100];
        int age;
        char gender;
    };

int main() {
    struct Person tolu = {"Tolu James", 20, 'M'};

    struct Person bond = tolu;

    tolu.age = 20;
    tolu.gender = 'm';
    // tolu.name = "Tolu";
    strcpy(tolu.name, "Tolu Adenike");

    printf("%d\n", tolu.age);
    printf("%c\n", tolu.gender);
    printf("%s\n", tolu.name);

    printf("%d\n", bond.age);
    printf("%c\n", bond.gender);
    printf("%s\n", bond.name);

    return 0;
}