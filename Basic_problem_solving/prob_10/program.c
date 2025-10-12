#include<stdio.h>

int main()
{
    char numbers[10];
    scanf("%s",  &numbers);

    // checking the condition and converting string to int;
    int condition = (numbers[0] - '0') % 2 == 0;

    if(condition){
        printf("EVEN");
    }
    else{
        printf("ODD");
    }

    return 0;
}