#include<stdio.h>

int main(){

    int a = 10;
    float b = 10.5;
    double c = 10.555;
    char d = 'd';

    printf("%lu\n", sizeof(a));
    printf("%lu\n", sizeof(b));
    printf("%lu\n", sizeof(c));
    printf("%lu\n", sizeof(d));

    return 0;
}