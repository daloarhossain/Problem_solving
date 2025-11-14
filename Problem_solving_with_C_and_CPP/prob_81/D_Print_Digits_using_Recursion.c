/**
 📅 Date   : 14-11-2025
 📕 Title  : (Developing problem solving skills 🙂)
 👨‍💻 Author : Daloar Hossain
 */

#include <stdio.h>

void seperate_nums(int number)
{
    if (number == 0)
    {
        printf("%d ", 0);
        return;
    }
    else if (number / 10 != 0)
    {
        // slice the last digit and send it;
        seperate_nums(number / 10);
    }

    // do modulus from the first digit as recursion has completed, and you have the first value.
    printf("%d ", number % 10);
}

int main()
{

    int test_case;
    scanf("%d", &test_case);

    for (int i = 0; i < test_case; i++)
    {
        int current_value;
        scanf("%d", &current_value);

        seperate_nums(current_value);

        // Print the new line after completing each test case
        printf("\n");
    }

    return 0;
}