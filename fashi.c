#include<stdio.h>

void loop();

int main(){
    int t;

    printf("Enter a number: ");
    scanf("%d", &t);

    loop(t);
    return 0;
}

void loop(int t) {
    for (int i = 0; i < t;i ++) {
        printf("Hello World\n");
    }
}