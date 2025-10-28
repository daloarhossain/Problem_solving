/**
 📅 Date   : 28-10-2025
 📕 Title  : (Developing problem solving skills 🙂)
 👨‍💻 Author : Daloar Hossain
 */

#include <stdio.h>
#include <string.h>

int main()
{

    int test_case;
    scanf("%d", &test_case);

    for (int i = 1; i <= test_case; i++)
    {
        char value[101];
        scanf("%s", value);

        int value_len = strlen(value);

        if (value_len > 10)
        {
            /*
                Print the
                    - First charecter
                    - (value length -2) to get the length between  first and last charecter
                    - Last charecter
            */

            printf("%c%d%c\n", value[0], value_len - 2, value[value_len - 1]);
        }
        else
        {
            printf("%s\n", value);
        }
    }
    return 0;
}