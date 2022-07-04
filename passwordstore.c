#include<stdio.h>
#include<string.h>

void storePassword();
void getPassword();

int main(){

    printf("Welcome to the password store\n");

    int option;

    while(1){
        printf("What will you like to do ?\n");
        printf("1. Create new Password. \t 2. Show Password \n");

        scanf("%d", &option);

        switch (option)
        {
            case 1:
                storePassword();
                break;
            case 2:
                getPassword();
                break;
            default:
                printf("Incorrect Option\n");
                continue;
                break;
        }

        printf("Would you like to do anything ?");
        printf("1. Yes. \t 2. No \n");

        scanf("%d", &option);

        switch (option)
        {
            case 1:
                continue;
                break;
        }

        break;
    }

    return 0;
}

void storePassword(){
    printf("Enter a new Password: \n");

    char password[200];
    scanf("%s",password);

    FILE *f;

    f = fopen("password.txt", "w");

    fprintf(f, "%s", password);

    fclose(f);
}


void getPassword(){
    char password[200];

    FILE *f;

    f = fopen("password.txt", "r");

    while(fscanf(f, "%s", password) != EOF){  
        printf("%s\n", password);  
    }  
}
