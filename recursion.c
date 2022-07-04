#include<stdio.h>

void recurs(){
    printf("Hello World\n");
    recurs();
}

int main() {
    recurs();
    return 0;
}