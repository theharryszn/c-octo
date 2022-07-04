#include<stdio.h>

int main(){

    int a = 5;

    // while(a > 10){
    //     printf("%d\n", a);
    //     a++;
    // }

    do {
        printf("%d\n", a);
        a++;
    } while (a < 10);

    return 0;
}