#include<stdio.h>

int sum(int a, int b, int c);

int main(){

    int val = sum(20, 30, 40);
    printf("%d", val);

    return 0;
}

int sum(int a, int b, int c) {
    return a + b + c;
}