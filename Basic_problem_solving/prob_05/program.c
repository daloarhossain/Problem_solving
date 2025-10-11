#include <stdio.h>
int main()
{
    int number_one;
    int number_two;

    scanf("%d %d", &number_one, &number_two);

    if(number_one > number_two){
        printf("%d", number_one);
    }
    else if(number_two > number_one){
        printf("%d", number_two);
    }
    else{
        printf("Equal");
    }

    return 0;
}