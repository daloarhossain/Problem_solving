#include <stdio.h>
int main()
{
    int get_number;
    scanf("%d", &get_number);

    if((get_number % 4) == 0 && (get_number % 100) != 0){
        printf("Leap Year");
    }
    else{
        printf("Not Leap Year");
    }
}