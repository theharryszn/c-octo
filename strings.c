#include<stdio.h>
#include<string.h>

int main() {
    char a[] = "%d\n";  
    a[1] = 'b';  
    printf(a, 65);  
    return 0;  

    // puts(strupr(word));

    // char guess[200];

    // gets(guess);

    // char *reversed = strrev(guess);

    // if(strcmp(word, reversed) == 0){
    //     puts("Your guess is correct");
    // }else {
    //     puts("You are wrong");
    // }

    // return 0;
}