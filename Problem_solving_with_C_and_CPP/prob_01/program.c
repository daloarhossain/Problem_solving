#include <stdio.h>
int main()
{
    int get_number;
    scanf("%d", &get_number);

    if (get_number == 0)
    {
        printf("Zero");
    }
    else
    {
        printf("Non Zero");
    }

    return 0;
}