#include <stdio.h>
int main()
{
    int get_number;
    scanf("%d", &get_number);

    if (get_number > 0)
    {
        printf("Positive");
    }
    else if (get_number < 0)
    {
        printf("Negative");
    }
    else
    {
        printf("Zero");
    }


    return 0;
}