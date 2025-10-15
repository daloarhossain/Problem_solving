#include <stdio.h>

// solution 01
int main()
{
    int counter;
    scanf("%d", &counter);

    for (int i = 1; i <= counter; i++)
    {
        int value;
        scanf("%d", &value);

        if (value != 0)
        {
            int executing_value = value;

            while (executing_value != 0)
            {
                int last_digit = executing_value % 10;
                executing_value /= 10;

                printf("%d ", last_digit);
            }
            printf("\n");
        }
        else if(value == 0){
            printf("%d \n", 0);
        }

    }

    return 0;
}

// Solution 02

int main()
{
    int counter;
    scanf("%d", &counter);

    for (int i = 1; i <= counter; i++)
    {
        int value;
        scanf("%d", &value);

        do
        {
            printf("%d ", value % 10);
            value /= 10;

        } while (value != 0);
        // take break after one action;
        printf("\n");
    }
}