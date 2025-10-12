#include<stdio.h>

int main()
{
    char value;
    scanf(" %c", &value);

    // checking value whether it is digit or capital or smaill letter.
    
    if(value >= 97){
        printf("ALPHA\n");
        printf("IS SMALL");
    }
    else if(value >= 65 && value <= 90){
        printf("ALPHA\n");
        printf("IS CAPITAL");
    }
    else{
        printf("IS DIGIT");
    }


    return 0;
}