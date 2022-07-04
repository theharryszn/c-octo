#include<stdio.h>
#include<string.h>

int main(){

    char note[10000];
    printf("Enter something: ");

    gets(note);

    FILE *f;

    f = fopen("README.txt", "w");

    fprintf(f, "%s\n", note);

    fclose(f);

    f = fopen("README.txt", "r");

    char c;

    while (1)
    {
        c = fgetc(f);

        if(c == EOF){
            break;
        }

        printf("%c", c);
    }

    fclose(f);

    return 0;
}