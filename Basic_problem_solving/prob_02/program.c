#include <stdio.h>
int main()
{
    int get_number;

    printf("Please enter an integer number... \n");
    scanf("%d", &get_number);

    if((get_number % 2 ) == 0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
}