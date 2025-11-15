/**
 📅 Date   : 15-11-2025
 📕 Title  : (Developing problem solving skills 🙂)
 👨‍💻 Author : Daloar Hossain
 */

#include <stdio.h>

int main()
{

    // Taking all the inputs
    int test_case;
    scanf("%d", &test_case);

    long long int multiplication[test_case];
    int numbers[test_case][3];

    for (int i = 0; i < test_case; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (j == 0)
            {
                scanf("%lld", &multiplication[i]);
            }
            else
            {
                scanf("%d", &numbers[i][j - 1]);
            }
        }
    }

    // Do the main operation
    for (int i = 0; i < test_case; i++)
    {
        // Calculate the first three values;
        long long int mul_of_abc = (long long) numbers[i][0] * numbers[i][1] * numbers[i][2];

        // finding the missing number;
        long long missing_num = multiplication[i] / mul_of_abc;


        // Print the output
        if (missing_num * mul_of_abc == multiplication[i])
        {
            // converting the double to integer and printing it;
            printf("%lld\n", missing_num);
        }
        else
        {
            printf("%d\n", -1);
        }
    }

    return 0;
}