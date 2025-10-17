#include <stdio.h>

int main()
{
    int test_case;
    scanf("%d", &test_case);

    for (int i = 1; i <= test_case; i++)
    {
        int value;
        scanf("%d", &value);

        // if value is 0 factorial;
        if (value == 0)
        {
            printf("%d\n", 1);
            continue;
        }

        else
        {   
            int factorial_value = 1;
           
            for(int f = 1; f <= value; f++){
                factorial_value *= f;
            }

            printf("%d\n", factorial_value);
        }
    }

    return 0;
}